#include <stdio.h>
#include "search_algos.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * linear_search - searches for value in an array of integers
 * @array: Pointer to first element of array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Returns -1 if value is not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return ((int)i);
		}
	}
	return (-1);
}
