#include "main.h"
/**
 * *_strncpy - a function that copies a string.
 * @dest: destination
 * @src: recourses
 * @n: number of copied char
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *R = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (R);
}
