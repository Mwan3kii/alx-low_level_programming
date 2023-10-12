#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: last digit of a number
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	_putchar(a + '0');
	return (a);
}
