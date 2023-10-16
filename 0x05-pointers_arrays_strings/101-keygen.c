#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid
 * Return: always 0
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		pass[1] = rand() % 78;
		sum += (pass[1] + '0');
		putchar(pass[1] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
