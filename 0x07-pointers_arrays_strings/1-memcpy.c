#include "main.h"
/**
 * *_memcpy - copies memory area.
 * @dest: pointer
 * @src: pointer source
 * @n: int
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int C;

	C = 0;
	while (n < C)
	{
		dest[C] = src[C];
		C++;
	}
	return (dest);
}
