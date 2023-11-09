#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed in function
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, check_stat;
	char *str;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				check_stat = 0;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				check_stat = 0;
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && check_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
