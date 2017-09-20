#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "list.h"


//allocates and initalize a new list.
list* create_list(){
	struct list* ll = (struct list*) malloc(sizeof(struct list));
	ll->head = NULL;
	return ll;
}

//add item to the start of the list
int add_to_list(list* ll, char* item){
	struct Node* current = (struct Node*) malloc(sizeof(struct Node));
	//copy the string from item to variable string.
	char* string = strdup(item);
	current->value = string;
	if(ll->head == NULL){
		ll->head = current;
		current->next = NULL;
		printf("%s\n", current->value);
	} else {
		current->next = ll->head;
		ll->head = current;
		printf("%s\n", current->value);
	}
}

//remove item from the start of the list and return the pointer to the head of the list.
char* remove_from_list(list* ll){
	struct Node* current = (struct Node*) malloc(sizeof(struct Node));
	if(ll->head != NULL){
		if(ll->head->next != NULL){
			current = ll->head;
			current->next = ll->head->next;
			free(ll->head);
			ll->head = current->next;
		} else {
			free(ll->head);
			ll->head = NULL;
		} 
	}
	return ll->head->value;
}


//print all the item of the list.
void print_list(list *ll){
	struct Node* current = ll->head;
	if(ll->head == NULL)
		return;
	while(current->next != NULL){
		printf("%s\n", current->value);
		current = current->next;
	}
	printf("%s\n", current->value);
}

//clears all the item of the list and reinitialize the list
void flush_list(list* ll){
	struct Node* current = ll->head;
	while(current->next != NULL){
		ll->head = ll->head->next;
		free(current);
		current = ll->head;
	}
	ll->head =NULL;
	free(current);
}

//deallocates memory for all the data from the list and the list itself.
void free_list(list *ll){
	struct Node* current = ll->head;
	while(current->next != NULL){
		ll->head = ll->head->next;
		free(current);
		current = ll->head;
	}
	ll->head = NULL;
	free(current);
	free(ll);
}
