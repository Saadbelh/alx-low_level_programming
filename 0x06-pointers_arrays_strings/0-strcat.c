#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: input
 * @src: input
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, l = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		l++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	dest[l + i] = '\0';
	return (dest);
}
