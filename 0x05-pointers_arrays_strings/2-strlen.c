#include "main.h"

/**
 * _strlen - return lenght of string
 * @s: stri
 * Return: lenght
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
