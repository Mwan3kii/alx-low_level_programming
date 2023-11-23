#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bi_rec(n);
	}
}
/**
 * print_bi_rec - prints recursively
 * @n: the number
 */
void print_bi_rec(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi_rec(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
