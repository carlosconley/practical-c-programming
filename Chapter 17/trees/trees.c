#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct node {
	char		*word;
	struct node *left;
	struct node *right;
};

void enter(struct node **, char *);

void delete(struct node **, char *, struct node **previous);

char *save_string(char *);

void memory_error(void);

void print_tree(struct node *);


int main(int argc, char const *argv[])
{
	struct node *first_ptr = NULL;
	struct node **tree = &first_ptr;

	char *words[] = {"Thingy", "Words", "Something", "Many", "Values", "What", "Thingy", "Another", "One", "Two"};
	int array_len = sizeof(words) / sizeof(words[0]);

	for (int i = 0; i < array_len; ++i) {
		enter(tree, words[i]);
	}
	print_tree(first_ptr);
	delete(tree, "Something", NULL);
	printf("%d\n", first_ptr==NULL);
	print_tree(first_ptr);


	return 0;
}


void enter(struct node **node, char *word)
{
	int  result;        /* result of strcmp */

	/*
	 * If the current node is null, we have reached the bottom
	 * of the tree and must create a new node.
	 */
	if ((*node) == NULL) {

	/* Allocate memory for a new node */
		(*node) = malloc(sizeof(struct node));
		if ((*node) == NULL)
			memory_error();

	/* Initialize the new node */
		(*node)->left = NULL;
		(*node)->right = NULL;
		(*node)->word = save_string(word);
	return;
	}
	/* Check to see where the word goes */
	result = strcmp((*node)->word, word);

	/* The current node already contains the word, no entry necessary */
	if (result == 0)
		return;

	/* The word must be entered in the left or right sub-tree */
	if (result < 0)
		enter(&(*node)->right, word);
	else
		enter(&(*node)->left, word);
}

void delete(struct node **node, char *word, struct node **previous)
{
	printf("We moved");
	int  result;        /* result of strcmp */

	/*
	 * If the current node is null, we have reached the bottom
	 * of the tree and must create a new node.
	 */
	if ((*node) == NULL) {
		printf("Could not find node");
	}
	/* Check to see where the word goes */
	result = strcmp((*node)->word, word);

	// The current node has the word we are trying to delete
	if (result == 0){
		if (*previous == NULL) {
			return;
		}
		int sub_tree_result = strcmp((*node)->word, (*previous)->left->word);
		if (sub_tree_result == 0)
		{ //means the node we are deleting is on the left side
			printf("We are on the left side\n");
			if ((*node)->left != NULL && (*node)->right != NULL)
			{
				struct node *right_tree = (*node)->left;     // tree to go down the rigth side of left node
				printf("1");
				(*previous)->left = (*node)->left;           // assign node to fill spot
				printf("1");
				while (right_tree->right != NULL)
					right_tree = right_tree->right; // find right most node
				right_tree->right = (*node)->right; // insert tree into end of NULL node
				free(*node);
				printf("1");
				return;
				printf("1");
			}
			else if ((*node)->left != NULL)
			{
				printf("2");
				(*previous)->left = (*node)->left;
				printf("2");
				free(*node);
				printf("2");
				return;
				printf("2");
			}
			else if ((*node)->right != NULL)
			{
				(*previous)->left = (*node)->right;
				free(*node);
				return;
			}
			else
			{
				(*previous)->left = NULL;
				free(*node);
				return;
			}
		}
		else
		{ // means we are on the right side of the node to be deleted
			printf("We are on the right side");
			if ((*node)->left != NULL && (*node)->right != NULL)
			{
				struct node *left_tree = (*node)->right;     // tree to go down the rigth side of left node
				printf("1");
				(*previous)->right = (*node)->right;           // assign node to fill spot
				printf("1");
				while (left_tree->left != NULL)
					left_tree = left_tree->left; // find right most node
				left_tree->left = (*node)->left; // insert tree into end of NULL node
				free(*node);
				printf("1");
				return;
			}
			else if ((*node)->left != NULL)
			{
				(*previous)->right = (*node)->left;
				free(*node);
				return;
			}
			else if ((*node)->right != NULL)
			{
				(*previous)->right = (*node)->right;
				free(*node);
				return;
			}
			else
			{
				(*previous)->right = NULL;
				free(*node);
				return;
			}
		}
	} else {
	/* The word must be deleted in the left or right sub-tree */
	if (result < 0)
		delete(&(*node)->right, word, node);
	else
		delete(&(*node)->left, word, node);
	}

}

char *save_string(char *string)
{
	char *new_string;   /* where we are going to put string */

	new_string = malloc((unsigned) (strlen(string) + 1));

	if (new_string == NULL)
		memory_error();

	strcpy(new_string, string);
	return (new_string);
}

void memory_error(void)
{
	fprintf(stderr, "Error:Out of memory\n");
	exit(8);
}

void print_tree(struct node *top)
{
	if (top == NULL)
		return;                 /* short tree */

	print_tree(top->left);
	printf("%s\n", top->word);
	print_tree(top->right);
}



