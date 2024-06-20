#include "sort.h"
/**
 * selection_sort -  sorts an array of integers in ascending order using the 
 * Selection sort algorithm
 * @array: the array of integers to be sorted
 * @size: the size of the array to sort
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int temp;
	int temp1 = 0;
	int temp2 = 0;
	size_t i = 0;
	size_t = 0;
	int swapped = 0;

	if (!array || size < 1)
	{
		return;
	}
	if (size == 1)
	{
		print_array(array, size);
		return;
	}
	while(i < size - 1)
	{
		swapped = 0;
		temp = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (temp > array[j])
			{
				swapped = 1;
				temp1 = j;
				temp = array[j];
			}
		}
		if (swapped == 1)
		{
			temp2 = array[i];
			array[i] = array[temp1];
			array[temp1] = temp2;
			print_array(array, size);
		}
		i++;
	}
}
