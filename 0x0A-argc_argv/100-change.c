#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int len = sizeof(coins) / sizeof(coins[0]);
	int mncoins = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < len; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
		}
		mncoins++;
	}
	printf("%d\n", mncoins);
	return (0);
}
