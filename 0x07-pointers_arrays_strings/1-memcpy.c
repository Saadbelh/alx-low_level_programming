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
	int C = 0;
	int j = n;

	for (; j > C; C++)
	{
		dest[C] = src[C];
		n--
	}

	return (dest);
}
