#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sum two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of number
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two number
 * @a: first number
 * @b: second number
 *
 * Return: diffrence of number
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication of number
 * @a: first number
 * @b: second number
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of numbers
 * @a: first number
 * @b: second number
 *
 * Return: division of numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - remainder of division
 * @a: first number
 * @b: second nummber
 *
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
