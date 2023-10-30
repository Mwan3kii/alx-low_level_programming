#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to the duplicated string
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *dupl;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	dupl = malloc(sizeof(char) * (len + 1));
	if (dupl == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dupl[i] = str[i];
	}
	return (dupl);
}
