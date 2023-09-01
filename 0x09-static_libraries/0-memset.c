#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer char
 * @b: char
 * @n: int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int C;

	for (C = 0; n > 0; C++, n--)
	{
		s[C] = b;
	}
return (s);
}
