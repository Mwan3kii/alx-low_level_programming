#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of argument string
 *
 * Return: pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, k = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		int j = 0;

		while (av[i][j])
		{
			ch++;
			j++;
		}
		i++;
	}
	result = malloc((sizeof(char) * ch) + ac + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (av[i])
	{
		int j = 0;

		while (av[i][j])
		{
			result[k] = av[i][j];
			k++;
			j++;
		}
		result[k] = '\n';
		k++;
		i++;
	}
	k++;
	result[k] = '\0';
	return (result);
}
