#include "sort.h"
/**
 * bubble_sort - sorts an array in ascending order
 * @array: pointer to array
 * @size: size of array
 * Return: nothing
*/
void bubble_sort(int *array, size_t size)
{
<<<<<<< HEAD
    size_t i, j;
    int temp = 0, is_swapped;

    if (array == NULL)
        return;
    
    for (i = 0; i < size - 1; i++)
        {
            is_swapped = 0;
            for (j = 0; j < size - 1; j++)
                {
                    if (array[j] > array[j + 1])
                        {
                            temp = array[j];
                            array[j] = array[j + 1];
                            array[j + 1] = temp;
                            print_array(array, size);
                            is_swapped = 1;
                        }
                }
            if (is_swapped == 0)
                break;
        }
=======
	size_t i, j;
	int temp = 0, is_swapped;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		is_swapped = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				 array[j + 1] = temp;
				print_array(array, size);
				is_swapped = 1;
			}
		}
	if (is_swapped == 0)
		break;
	}
>>>>>>> ce38456cfe3a4347f4147992627f1d98f74c57b0
}
