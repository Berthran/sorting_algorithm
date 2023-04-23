#include <stdio.h>
#include <stdlib.h>

void print_array(const int *array, size_t size);
void baby_bubble_sort(int *array, size_t size);

int main(void)
{
	int array[] = {5, 6, 7, 8, 10, 9};
	//int array2[] = {5, 1, 6, 2, 0, 8};
	//int array3[] = {0, 2, 1, 5, 8, 6};
	baby_bubble_sort(array, 6);
	//printf("\nNext Sorting\n");
	//baby_bubble_sort(array2, 6);
	//printf("\nNext Sorting\n");
	//baby_bubble_sort(array3, 6);

	return (0);
}

void baby_bubble_sort(int *array, size_t array_size)
{
	size_t i;
	size_t size = array_size;
	int temp, inner_loop; // new_size;
	int pass = 0;
	int swapped = 1;

	printf("Before  bubble sort\n");
	print_array(array, size);
	printf("\n");

	while (swapped)
	{
		pass += 1;
		swapped = 0;
		//new_size = 0;
		inner_loop = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				swapped = 1;
				//new_size = i;
				print_array(array, array_size);
			}
			inner_loop += 1;
		}
		/* Optimize II: reduce outer loop by 1 */
		if ((size_t)pass == array_size - 1)
			swapped = 0;

		printf("\nPass %d: inner loops %d\n", pass, inner_loop);
		print_array(array, array_size);
		printf("\n");
		
		/* Optimize I: reduce no. of inner loops run */
		size = size - 1;
		/* Optimize III: count self sorted elements */
		//size = new_size;
	}
}


void print_array(const int *array, size_t size)
{
	size_t i;
	i = 0;
	while (array && i < size)
	{
		if (i > 0)					            printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}			
