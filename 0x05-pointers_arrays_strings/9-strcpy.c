#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
