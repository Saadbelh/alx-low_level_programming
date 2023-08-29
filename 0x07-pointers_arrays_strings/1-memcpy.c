#include "main.h"
/**
 * *_memcpy - copies memory area.
 * @dest: pointer
 * @src: pointer source
 * @n: int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int C;

	for (C = 0; C < n; C++)
	{
		dest[C] = src[C];
	}

	return (dest);
}
