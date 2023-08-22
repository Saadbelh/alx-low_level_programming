#include "main.h"

/**
 * swap_int - swap a and b
 * @a: input a
 * @b: input b
 * Return: a and b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
