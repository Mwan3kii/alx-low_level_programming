#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: function parameter
 */
void puts_half(char *str)
{
	int n;
	int length = 0;
	int i;

	for (length = 0; str[length] != '\0'; length++)
	{
		length++;
		n = (length + 1) / 2;
	}
	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
