#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between nmbers
 * @n: number of intergerrs to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, const unsigned int));
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
