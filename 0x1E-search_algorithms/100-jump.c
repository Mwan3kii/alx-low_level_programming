#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: Pointer to first element of array
 * @size: Number of elements in the array
 * @value: The value
 * Return: -1 if value is not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = (size_t) sqrt(size);
	size_t prev = 0;
	size_t curr = 0;
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}
	if (curr < size)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", prev, curr);
	}
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n", prev, size - 1);
		curr = size;
	}
	for (i = prev; i < curr; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return ((int)i);
		}
	}
	return (-1);
}
