#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * bin_recursive - searches binary recursively
 * @array: pointer to array
 * @left: start indx
 * @right: end indx
 * @value: the value to search for
 * Return: -1 if not found
 */
int bin_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (bin_recursive(array, left, i, value));
	return (bin_recursive(array, i + 1, right, value));
}
/**
 * advanced_binary - searches for value in array
 * @array: pointer to array
 * @size: number of elems
 * @value: the value
 * Return: the indx of searched elem
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (bin_recursive(array, 0, size - 1, value));
}
