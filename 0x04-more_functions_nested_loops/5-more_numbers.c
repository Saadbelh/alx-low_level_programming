#include "main.h"

/**
 * more_numbres - print them
 */
void more_numbres(void)
{
	int i, j;

	for (i = 1; i = 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
