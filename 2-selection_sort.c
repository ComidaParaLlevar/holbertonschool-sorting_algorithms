#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 *                  the Selection sort algorithm.
 * @array: array to be sorted.
 * @size: size of the array.
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, min_idx;

    for (i = 0; i < size - 1; i++)
