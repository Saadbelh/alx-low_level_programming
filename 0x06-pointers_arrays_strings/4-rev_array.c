#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: array
 * @n: number
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
