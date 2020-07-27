#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* 
 *	creating the structure with data and a pointer to the
 *  next structure in the linked list
 */
struct linked_list {
	char data[30];
	struct linked_list *next_ptr;
} *first_ptr = NULL;

// add an item to the beginning of the list
void add_list (char *item) 
{
	// create struct to hold new item
	struct linked_list *new_item_ptr;
	// allocate memory for new struct
	new_item_ptr = malloc(sizeof(struct linked_list));
	// copy the item into the data value
	strcpy((*new_item_ptr).data, item);
	// save the address of the previously first item to the
	// value of the next pointer value
	(*new_item_ptr).next_ptr = first_ptr;
	// set the new first item as the created item
	first_ptr = new_item_ptr;
}
