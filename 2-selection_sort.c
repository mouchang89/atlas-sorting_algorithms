#include "sort.h"

/**
 * swap_ints - swap 2 integers in an array
 * @a: first integer
 * @b: second integer
 *
 * Return: 0
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - sorts array of integers in ascending order using
 * selection sort algorithm
 * @array: array of integers
 * @size: size of array
 *
 * Return: prints array after each swap
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
		{
			min = (array[j] < *min) ? (array + j) : min;
		}
		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}
