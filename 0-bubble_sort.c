#include "sort.h"
#include <stddef.h>
/*
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: the array of integers to be bubble sorted
 * @size: the size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int temp;
	int swap;
	size_t count = size;

	if (!array || size == 0)
	{
		return;
	}
	for(i = 0; i < size - 1; i++)
	{
		swap = 0;
		for(j = 0; j < count - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
		if (swap == 0)
		{
			break;
		}
		count--;
	}
}
