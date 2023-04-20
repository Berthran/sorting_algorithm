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

const int NUMBER = 10;

int main(void)
{
	person people[NUMBER];

	/* linear search */
	for (int i = 0; i < NUMBER; i++) {
		char name[20], number[20];
		people[i].name = fgets(name, 20, stdin);
		people[i].number = fgets(number, 20, stdin);
	}

	for (int i = 0; i < NUMBER; i++)
	{
		if (strcmp(people[i].name, "David") == 0)
		{
			printf("Found %s\n", people[i].number);
			return (0);
		}
	}
	printf("Not found\n");
	return (0);
}
