#include "main.h"

/**
 * get_bit - returns the value of
 * @n: number
 * @index: index of the bit
 *
 * Return: value of
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int s_val;

	if (index > 63)
		return (-1);

	s_val = (n >> index) & 1;

	return (s_val);
}
