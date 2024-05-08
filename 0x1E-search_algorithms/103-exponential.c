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
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
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
 * bin_search - searches in spec range
 * @array: pointer to array
 * @low: lower bound
 * @high: higher bound
 * @value: the value
 *
 * Return: -1 if value is not found
 */
int bin_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;
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
	size_t bod = 1;
	size_t low = bod / 2;
	size_t high = (bod >= size) ? size - 1 : bod;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (bod < size && array[bod] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bod, array[bod]);
		bod *= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	return (bin_search(array, low, high, value));
}
