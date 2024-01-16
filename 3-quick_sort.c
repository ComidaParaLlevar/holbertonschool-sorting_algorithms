#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order using
 *              the Quick sort algorithm with the Lomuto partition scheme.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}
