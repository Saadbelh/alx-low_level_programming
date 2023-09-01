#include "main.h"

/**
 * _strstr - Entry point file me
 * @haystack: put
 * @needle: put
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *T = needle;

		while (*l == *T && *T != '\0')
		{
			l++;
			T++;
		}

		if (*T == '\0')
			return (haystack);
	}

	return (0);
}
