#include "main.h"
/**
 * _isalpha - checks for character
 *
 * @c: ASCII code
 *
 * Return: 1 if lowercase or uppercase otherwise 0
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
