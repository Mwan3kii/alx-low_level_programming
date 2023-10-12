#include <stdio.h>
/**
 * main - fibonacci<3
 *
 * Return: (Success)
 */
int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int l = 100000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", bef);

	for (i = 2; i < 99; i++)
	{
		printf(", %lu", aft);
		bef1 = (bef / l);
		bef2 = (bef % l);
		aft1 = (aft / l);
		aft2 = (aft % l);

		aft = aft1 + aft2;
		bef = bef1 + bef2 + ((aft1 + aft2) / l);
	}
	printf("\n");
	return (0);
}
