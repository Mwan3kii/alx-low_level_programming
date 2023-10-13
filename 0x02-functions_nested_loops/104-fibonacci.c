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
	unsigned long int sum;

	printf("%lu, %lu", bef, aft);

	for (i = 2; i < 98; i++)
	{
		bef1 = (bef / l);
		bef2 = (bef % l);
		aft1 = (aft / l);
		aft2 = (aft % l);

		unsigned long int sum = bef2 + aft2;

		if (sum >= l)
		{
			sum -= l;
			bef1++;
		}

		unsigned long int aft_low = sum;
		unsigned long int aft_high = bef1 + aft1;

		if (aft_high >= l)
		{
			aft_high -= l;
		}
		bef = aft;
		aft = aft_high * l + aft_low;
		printf(",%lu", aft);
	}
	printf("\n");
	return (0);
}
