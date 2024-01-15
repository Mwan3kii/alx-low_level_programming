#include "main.h"
/**
 * _strchr - main function
 * @s: function parameter
 * @c: function parameter
 *
 * Return: pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
		{
			return (s + k);
		}
	}
	return (0);
}
