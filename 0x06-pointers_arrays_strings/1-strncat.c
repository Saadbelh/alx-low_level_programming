#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: destination
 * @src: resource
 * @n: number of caracter to concatenate
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *r = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;

		dest++;
		src++;
		n--;
	}

	return (r);
}
