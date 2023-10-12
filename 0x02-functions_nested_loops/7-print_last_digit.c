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
		a = -n % 10;
	else
	a = n % 10;

	_putchar('0' + a);
	return (a);
}
