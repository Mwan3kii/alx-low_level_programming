#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * bin_search - searches for a value in a sorted array of integers
 * @array: pointer of array
 * @left: left elem
 * @right: right elem
 * @value: the value
 *
 * Return: -1 if not found
 */
int bin_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	while (right > left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
/**
 * exponential_search - searches in a array
 * @array: pointer to the first element of the array
 * @size: size of the array to search in
 * @value: value to search for
 *
 * Return: index of searched
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, r;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i *= 2)
			printf("Value checked array [%ld] = [%d]\n", i, array[i]);
	}
	r = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, r);
	return (bin_search(array, i / 2, r, value));
}
