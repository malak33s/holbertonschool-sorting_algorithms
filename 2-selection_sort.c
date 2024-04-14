#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm.
 * @array: an array of integer.
 * @size: size.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, low;
	int swap;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		low = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[low])
				low = j;
		}
		if (low != i)
		{
			swap = array[i];
			array[i] = array[low];
			array[low] = swap;
			print_array(array, size);
		}
	}
}
