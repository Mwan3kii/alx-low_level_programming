#include "main.h"
/**
 * set_bit - sets value of bit to 1 at a given index
 * @n: number
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if it worked
 * or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int value;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	value = 1;
	value = value << index;
	*n = ((*n) | value);
	return (1);
}
