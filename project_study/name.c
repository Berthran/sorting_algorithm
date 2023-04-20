#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Problem: we want to search for a number among n number of closed doors
 * Algorithm: linear search
 * Psuedocode
 for i from 0 to n-1
 	if number behind the i'th door
		return True
	return False
*/

/*Effieciency of linear search 
 * O(n)
 * omega(1)
 */

/* Problem: we want to search for a number among n number of closed doors
 * Algorithm: binary search
 * Psuedocode
 if no doors
 	return False
 if number behind the middle door
 	return True
 else if number < middle door number
 	search for number to the left
 else if number > middle door number
 	search for number to the right
*/

/* Effieciency of binary search 
 * O(log n): that is the max time it takes for an array to split it in half until a 
 * particular number is found
 * omega(1)
 */

int main(void)
{
	char *names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};
	/* linear search */
	for (int i = 0; i < 7; i++)
	{
		if (strcmp(names[i], "RON") == 0)
		{
			printf("Found\n");
			return (0);
		}
	}
	printf("Not found\n");
	return (1);
}
