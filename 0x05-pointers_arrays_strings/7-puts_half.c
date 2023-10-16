#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: function parameter
 */
void puts_half(char *str)
{
	int i;
	int n;
	int length = 0;

	for (i = 0; str[1] != '\0'; i++)
	{
		length++;
		n = (length - 1) / 2;
	}
	for (i = n + 1; str[1] != '\0'; i++)
	{
		_putchar(str[1]);
	}
	_putchar('\n');
}
