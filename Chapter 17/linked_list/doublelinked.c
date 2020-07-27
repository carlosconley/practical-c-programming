#include <stdlib.h>
#include <stdio.h>

struct double_list {
	int data;
	struct double_list *next_ptr;
	struct double_list *previous_ptr;

};
void init_double(void);

void double_enter(struct double_list **, int);

void double_delete(struct double_list **, int);

void print_list(struct double_list *);

int main(int argc, char const *argv[])
{
	struct double_list *first_ptr = NULL;
	struct double_list **double_list = &first_ptr;


	double_enter(double_list, 1);
	print_list(first_ptr);
	double_enter(double_list, 10);
	double_enter(double_list, 5);
	print_list(first_ptr);
	double_enter(double_list, 0);
	double_enter(double_list, 100);
	print_list(first_ptr);
	double_delete(double_list, 1);
	print_list(first_ptr);
	return 0;
}

void double_enter(struct double_list **head_ptr, int item)
{
	struct double_list *insert_ptr;
	struct double_list *previous_ptr;

	insert_ptr   = *head_ptr;
	previous_ptr = NULL;
	int i = 0;
	while (1) {
		if (insert_ptr == NULL){
			break;
		}
		if (item <= insert_ptr->data)
			break;
		++i;
		previous_ptr = insert_ptr;
		insert_ptr   = insert_ptr->next_ptr;
	}
	struct double_list *new_item_ptr = NULL;
	new_item_ptr = malloc(sizeof(struct double_list));

	new_item_ptr->data = item;
	// We are at the head of a list
	if (insert_ptr == NULL && previous_ptr == NULL) {
		new_item_ptr->next_ptr = NULL;
		*head_ptr = new_item_ptr;
		return;
	}
	else if (previous_ptr == NULL) {
		insert_ptr->previous_ptr = new_item_ptr;
		new_item_ptr->next_ptr = insert_ptr;
		*head_ptr = new_item_ptr;
		return;
	} // We are at the end of a list
	else if (insert_ptr == NULL) {
		previous_ptr->next_ptr = new_item_ptr;
		new_item_ptr->previous_ptr = previous_ptr;
		new_item_ptr->next_ptr = NULL;
		return;
	} else {
		new_item_ptr->next_ptr = insert_ptr;
		new_item_ptr->previous_ptr = insert_ptr->previous_ptr;
		insert_ptr->previous_ptr->next_ptr = new_item_ptr;
		insert_ptr->previous_ptr = new_item_ptr;
		return;
	}
}

void double_delete(struct double_list **head_ptr, int item)
{
	struct double_list *remove_ptr;

	remove_ptr = *head_ptr;

	while (1) {
		if (remove_ptr == NULL){
			break;
		}
		if (item == remove_ptr->data){
			break;
		}
		remove_ptr = remove_ptr->next_ptr;
	}
	// Did not find item
	if (remove_ptr == NULL) {
		return; // At the head of a list
	} else if (remove_ptr->previous_ptr == NULL) {
		remove_ptr->next_ptr->previous_ptr=NULL;
		*head_ptr = remove_ptr->next_ptr;
		free(remove_ptr);
		return;
	} // We are at the end of a list
	else if (remove_ptr->next_ptr == NULL) {
		remove_ptr->previous_ptr->next_ptr=NULL;
		free(remove_ptr);
		return;
	} else {
		remove_ptr->next_ptr->previous_ptr=remove_ptr->previous_ptr;
		remove_ptr->previous_ptr->next_ptr=remove_ptr->next_ptr;
		free(remove_ptr);
		return;
	}
}

void print_list(struct double_list *node)
{
	if (node == NULL)
		return;
	printf("%d\n",node->data);
	print_list(node->next_ptr);
}
