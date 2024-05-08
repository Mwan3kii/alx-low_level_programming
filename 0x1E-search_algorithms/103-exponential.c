#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>
/**
 * print_array - prints an array
 * @array: pointer to array
 * @low: start indx
 * @high: end indx
 */
void print_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	for (size_t i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
		{
			printf(", ");
		}
	}
	printf("\n");
}
/**
 * binary_search - searches in spec range
 * @array: pointer to array
 * @low: lower bound
 * @high: higher bound
 * @value: the value
 *
 * Return: -1 if value is not found
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	while (low <= high)
	{
		print_array(array, low, high);
		size_t mid = low + (high - low) / 2;
		if (array[mid] == value)
		{
			return ((int)mid);
		}
		if (array[mid] < value)
		{
			low = mid + 1;
		} 
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
/**
 * exponential_search - searche for value
 * @array: pointer to array
 * @size: no of elems
 * @value: the value
 * 
 * Return: -1 if value is not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t low = bound / 2;
	size_t high = (bound >= size) ? size - 1 : bound;

	if (array == NULL || size == 0)
	{
		return -1;
	}
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	return binary_search(array, low, high, value);
}
