#include <stdio.h>
/**
 * main - fibonacci<3
 *
 * Return: (Success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, temp;
	int count;

	printf("%lu, %lu", a, b);
	for (count = 3; count <= 98; count++)
	{
		temp = a + b;
		printf(", %lu", temp);
		a = b;
		b = temp;
	}
	printf("\n");
	return (0);
}
