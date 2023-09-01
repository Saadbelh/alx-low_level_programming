#include "main.h"
/**
 * *_strpbrk -  searches a string
 * @s: p
 * @accept: p
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *t;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				t = &s[i];
				return (t);
			}
		}
	}
	return (0);
}
