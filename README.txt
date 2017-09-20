Instructions to run the program:
- Extract all the contents of zip folder.
- Open the terminal, change directory to the folder you just extracted.
- Enter the following commands to run your program:
	.:~$ make list_make
	.:~$ ./list_make


This assignment is about creating a C-string linked list data structure for storing character strings using a list.h header file and list.c source file. All the functions of list implementation are tested using list_test.c file.

Three different files are needed for this assignment to work:
 -list.h header file contains the defination for struct type node and list and also signature of all the functions.
 -list.c contains the implmentation of the functions.
 -list_test.c contains the main() functions. All testing of the implementation of functions in list.c are done in this file.

There are six functions that are implemented:
1. create_list() 
	- intializes a empty list.

2. add_to_list(list* ll, char* item)
	-This functions all the new item at the start of the linked list and return 0 if the adding is successful and return 1 for otherwise.

3. remove_from_lis(list* ll)
    -This functions remove the item from the start of the linked list and return a pointer to the head of the list.

4. print_list(list *ll)
    -prints all the elements of the list

5. flush_list(list* ll)
    -this functions clears all the items of the list.
    
6. free_list(list *ll)
	- this functions deallocates memory for all the data from the list and the list itself.
