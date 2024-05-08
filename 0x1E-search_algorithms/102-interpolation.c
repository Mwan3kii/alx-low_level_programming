#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"
/**
 * interpolation_search - Searches for a value in a sorted array
 * @array: Pointer to the first element
 * @size: No of elements in the array
 * @value: The value
 * Return: -1 if value is not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (low <= high && array[low] <= value && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		       * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return ((int)pos);
		}
		if (array[pos] < value)
		{
			low = pos + 1;
		} else
		{
			high = pos - 1;
		}
	}
	return (-1);
}
