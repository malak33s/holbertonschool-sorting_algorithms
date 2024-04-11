#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm.
 * @array: an array of integer.
 * @size: size.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j;
	int bub;

	for (i = 0; i < 15; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (a[j] > a[j++])
			{
				bub = a[j];
				a[j] = a[j++];
				a[j++] = bub;
			}
			printf("%d", a[j]);
			if (j < size - 1)
				printf(", ");
		}
		printf("\n");
	}
}
