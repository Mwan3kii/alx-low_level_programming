#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - returns sum of all its parameter
 * @n: parameter
 *
 * Return: is n == 0 - 0
 * otherwise sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(args, const unsigned int);
		}
	}
	va_end(args);
	return (sum);
}
