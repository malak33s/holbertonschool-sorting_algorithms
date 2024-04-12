#include "sort.h"

/**
 * Lomoto_partition - Lomoto partition function for quicksort.
 * @array: an array of integer.
 * @low: lower index.
 * @high: higher index.
 * Return: index of the pivot element.
 */

int Lomoto_partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int swap, j, k;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap = array[i];
			array[i] = array[j];
			array[j] = swap;
			for (k = low; k <= high; k++)
			{
				printf("%d ", array[k]);
			}
			printf("\n");
		}
	}
	swap = array[i + 1];
	array[i + 1] = array[high];
	array[high] = swap;
	for (k = low; k <= high; k++)
		printf("%d ", array[k]);
	printf("\n");

	return (i + 1);
}

/**
 * quick_sort_helper - helper function for quick_sort.
 * @array: an array of integer.
 * @low: lower index.
 * @high: higher index.
 * Return: last index return by the Lomoto partition.
 */

void quick_sort_helper(int *array, int low, int high)
{
	int part = 0;

	if (low < high)
	{
		part = Lomoto_partition(array, low, high);
		quick_sort_helper(array, low, part - 1);
		quick_sort_helper(array, part + 1, high);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 * @array: an array of integer.
 * @size: size.
*/

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_helper(array, 0, size - 1);
}
