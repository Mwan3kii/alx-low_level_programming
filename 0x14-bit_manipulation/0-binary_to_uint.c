#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number
 * or 0 if there is one or more chars in the string b
 * that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int l, i, k, p, sum;
	int base;

	base = 2;
	sum = 0;
	p = 1;
	if (b == NULL)
		return (0);
	for (l = 0; b[l] != '\0'; l++)
		;
	if (l == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (k = l - 1; k > 0; k--)
			p = p * base;
		sum = sum + (p * (b[i] - 48));
		l--;
		p = 1;
	}
	return (sum);
}
