#include "main.h"
/**
 * _strstr - main function
 * @needle: function parameter
 * @haystack: function parameter
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*h == '\0')
			return (haystack);
	}
	return (0);
}
