#include "main.h"
/**
 * _strspn - the lenght of prefix
 * @s: string
 * @accept: s
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\n')
				return (i);
		}
	}
	return (i);
}
