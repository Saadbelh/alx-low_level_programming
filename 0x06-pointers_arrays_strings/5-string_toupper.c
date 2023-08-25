#include "main.h"
#include<ctype.h>
/**
 * *string_toupper -  changes all lowercase letters of a string to uppercase.
 * @n: array
 * Return: string
 */
char *string_toupper(char *n)
{
	while (*n)
	{
		if (islower(*n))
		{
			*n = toupper(*n);
		}
		n++;
	}
	return (n);
}
