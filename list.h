#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Defining a struct node that has value field and a next pointer node that points to next node
typedef struct Node {
	char* value;
	struct Node *next;
} Node;

//defining a struct list that has node pointing to the head of the list.
typedef struct list {
	struct Node* head;
}list;

list* create_list();
int add_to_list(list* ll, char* item);
char* remove_from_lis(list* ll);
void print_list(list *ll);
void flush_list(list* ll);
void free_list(list *ll);

