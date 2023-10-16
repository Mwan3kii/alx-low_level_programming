#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		sign = (s[i++] == '-') ? -1 : 1;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i++] - '0');
	}
	return result * sign;
}
