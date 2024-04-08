#include "sort.h"

/**
 * swap_ints - swap 2 integers in an array
 * @a: firts integer
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
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers to sort
 * @size: size of array
 *
 * Return: prints array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp;
	
	for (i = 0; i < size -1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
			}
		}
		len--;
	}
}
