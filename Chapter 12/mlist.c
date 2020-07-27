/* mlist.c -- a strcture to hold the data for a mailing list. Function alongside to print data
*/

#include <stdio.h>
#include <string.h>


struct mail_list {
	char name[50];              /* name of recipient */
	char address1[60];				/* street adress */
	char address2[60];           	/* Additional info, apt num etc */
	char city[50];              /* city, town, village */
	char state[3];              /* two-letter postal code for state */
	long int zip;                    /* postal zip code */
};

void print_list(struct mail_list *list);



int main(int argc, char const *argv[])
{
	struct mail_list list[100];
	strcpy(list[0].name, "Carlos Conley");
	strcpy(list[0].address1, "200 E. Delware Pl.");
	strcpy(list[0].address2, "Apt 32FA");
	strcpy(list[0].city, "Chicago");
	strcpy(list[0].state, "IL");
	list[0].zip = 606011;

	print_list(list);

	return 0;
}

void print_list(struct mail_list *list)
{

	// Iterating through every index
	for (int i = 0; i < sizeof(list); ++i) {
		if (strlen(list[i].name) == 0) // Check to see if that index has a name attatched. If not, skip
			continue;

		printf("%s,\n", list[i].name);
		printf("%s %s,\n", list[i].address1, list[i].address2);
		printf("%s, %s %ld\n", list[i].city, list[i].state, list[i].zip);
	}
}