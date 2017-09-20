#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  //intializing a list and printing the item of the empty list.
	list* ll = create_list();
	print_list(ll)
	
	//adding "hello", "bye" nad "hi" to the list and printing all the elements in list.
	add_to_list(ll, "hello");
	add_to_list(ll, "bye");
	add_to_list(ll, "hi");
	print_list(ll);
	
	//removing first two items from the list and printing the remaining elements in list.
	remove_from_list(ll);
	remove_from_list(ll);
	print_list(ll);
	
	//flusing the list and printing the empty list.
	flush_list(ll);
	print_list(ll);
	
	//freeing list and printing elements in the list.
	free_list(ll);
	print_list(ll);
	return 0;
}