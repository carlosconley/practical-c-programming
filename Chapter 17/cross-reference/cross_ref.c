/*
 * cross-ref -- lists all numbers names in an array and how many times they were called
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list {
	struct list *next;
	char *data;
	int frequency;
};
struct list *head = NULL;

int find(char *);

void print_list(struct list *);

void add(char *);

int main(void)
{

	/* array is read into the linked list and then the linked list is printed out */

	print_list(head);
	return 0;
}

/* use the find and add function for unordered list */

int find(char *item)
{
	struct list *current_ptr;

	current_ptr = head;

	while (current_ptr != NULL && strcmp(current_ptr->data, item) != 0)
		current_ptr = current_ptr->next;

	return (current_ptr != NULL);
}

void print_list(struct list* top)
{
	if (top == NULL)
		return;
	printf("%s: %d, ", top->data, top->frequency);
	print_list(top->next);
	printf("%d\n", head->frequency);
}

void add(char *item)
{
	struct list *current_ptr;

	current_ptr = head;

	while (current_ptr != NULL && strcmp(current_ptr->data, item) != 0) {
		current_ptr = current_ptr->next;
	}

	/* Make sure that evaluating for the current ptr being null happens
	* before trying to access any children otherwise program will crash
	*/
	if (current_ptr != NULL) {
		if (strcmp(current_ptr->data, item) == 0) {
		current_ptr->frequency += 1;
		}
	} else {
		struct list *new_item_ptr;
		new_item_ptr = malloc(sizeof(struct list));
		new_item_ptr->data = item;
		new_item_ptr->frequency = 1;
		new_item_ptr->next = head;
		head = new_item_ptr;
	}

}