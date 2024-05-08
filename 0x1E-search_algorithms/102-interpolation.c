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
	size_t k;
	size_t l, r;

	if (array == NULL)
		return (-1);
	for (l = 0, (r = size - 1); r >= l;)
	{
		k = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (k < size)
		{
			printf("Value checked array [%ld] = [%d]\n", k, array[k]);
		}
		else
		{
			printf("Value checked array [%ld] is out of range\n", k);
			break;
		}
		if (array[k] == value)
			return (k);
		if (array[k] > value)
			r = k - 1;
		else
			l = k + 1;
	}
	return (-1);
}
