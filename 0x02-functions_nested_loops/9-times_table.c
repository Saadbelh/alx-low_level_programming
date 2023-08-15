#include "main.h"
/**
 * times_table - prints the 9 lines
 *
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			k = j * i;
			if (k < 10)
			{
				_putchar(' ');
			}
			else
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
		}
		_putchar('\n');
	}
}
