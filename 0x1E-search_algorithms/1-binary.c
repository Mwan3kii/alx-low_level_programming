#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * print_array - Prints the array
 * @array: Pointer to first element of the array
 * @low: The starting indx
 * @high: The ending indx
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
 * binary_search - Searches for value in sorted array of integers
 * @array: Pointer to first element of array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 * Return: -1 if value is not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}
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
