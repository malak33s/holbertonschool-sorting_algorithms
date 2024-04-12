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

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				bub = array[j];
				array[j] = array[j + 1];
				array[j + 1] = bub;
				print_array(array, size);
			}
		}
	}
}
