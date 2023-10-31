#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concertenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: contents of s1 then s2 and NULL
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = 0, len2 = 0, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j <= len2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
