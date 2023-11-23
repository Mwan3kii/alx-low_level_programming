#include "main.h"
/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int y;
	int checks;

	checks = (int) (((char *)&y)[0]);
	return (checks);
}
