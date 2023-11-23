#include "main.h"
/**
 * clear_bit - sets value of bit to 0 at a given index
 * @n: number
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if it worked or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int value;

	value = 1;
	value = value << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = value ^ *n;
	return (1);
}
