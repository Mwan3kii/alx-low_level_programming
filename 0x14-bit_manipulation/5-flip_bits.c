#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits of flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int total;

	result = n ^ m;
	for (total = 0; result > 0;)
	{
		if ((result & 1) == 1)
			total++;
		result = result >> 1;
	}
	return (total);
}
