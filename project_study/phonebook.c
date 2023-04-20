#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* What if we want to create our own data type - a phonebook
 * It has a name
 * and a phone number
 */

typedef struct {
	char *name;
	char *number;
} person;

int main(void)
{
	/* Naive Approach 
	char *names[] = {"Bill", "David"};
	char *numbers[] = {"+1-617-495-1000", "+1-949-468-2750"};*/

	/* More programmatic approach */
	person people[2];

	people[0].name = "Bill";
	people[0].number = "+1-617-495-1000";

	people[1].name = "David";
	people[1].number = "+1-949-468-2750";

	/* linear search */
	for (int i = 0; i < 2; i++)
	{
		if (strcmp(people[i].name, "David") == 0)
		{
			printf("Found %s\n", people[i].number);
			return (0);
		}
	}
	printf("Not found\n");
	return (1);
}
