/* dellink - deletes an element of a linked-list
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct linked_list {
	struct linked_list *next_ptr;
	char *data;
};
struct linked_list *first_ptr = NULL;

int find(char *);

void del_list (char *);

void add_list (char *);

void print_list(struct linked_list *);

int main(int argc, char const *argv[])
{
	char *word = "Second";
	add_list(word);
	add_list("Something");
	printf("First List\n");
	print_list(first_ptr);
	printf("Deleted List\n");
	del_list(word);
	print_list(first_ptr);
	return 0;
}

void add_list (char *item)
{
	struct linked_list *new_item_ptr;
	new_item_ptr = malloc(sizeof(struct linked_list));
	new_item_ptr -> data = item;
	new_item_ptr -> next_ptr = first_ptr;
	first_ptr = new_item_ptr;

}

void del_list(char *item)
{
	struct linked_list *current_ptr;
	struct linked_list *next_ptr;
	current_ptr = first_ptr;
	while(current_ptr != NULL) {
		next_ptr = current_ptr->next_ptr;
		if(strcmp(next_ptr->data, item) == 0) {
			current_ptr->next_ptr = next_ptr->next_ptr;
			free(next_ptr);
			break;
		} else {
			printf("Did not find item");
			break;
		}
	}
}

void print_list(struct linked_list* top)
{
	if (top == NULL)
		return;
	printf("%s\n",top->data);
	print_list(top->next_ptr);
}

int find(char *name)
{
	/* current structure we are looking at */
	struct linked_list *current_ptr = first_ptr;

	while (current_ptr != NULL) {
		if (strcmp(current_ptr -> data, name) == 0)
			break;
		current_ptr = current_ptr -> next_ptr;
	}
	// if the current_ptr is null, we fell off the end of the list and didn't find the name
	return (current_ptr != NULL);
}

/*void del_list (struct linked_list *name)
{
	struct linked_list *current_ptr = first_ptr;
	struct linked_list *previous_ptr;

	// While the data does not match name and the ptr is not null
	while ((strcmp(current_ptr -> data, name) != 0) && current_ptr != NULL)) {
		prevois_ptr = current_ptr;
		current_ptr = current_ptr -> next_ptr;
	}

	if (current_ptr != NULL){
		previous_ptr -> next_ptr = current_ptr -> next_ptr;
		free()
	}
}*/