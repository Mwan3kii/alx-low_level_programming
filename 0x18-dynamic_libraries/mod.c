#include "main.h"
#include <stdio.h>
/**
 * mod - does modulation
 * @a: first interger
 * @b: second interger
 * Return: modulation
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		return (0);
}
