#include "main.h"
#include<ctype.h>
/**
 * *string_toupper -  changes all lowercase letters of a string to uppercase.
 * @n: array
 * Return: string
 */
char *string_toupper(char *n)
{
	int i;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
