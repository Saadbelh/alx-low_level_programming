#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * @str: input
 */
void puts2(char *str)
{
	int l = 0;
	int a = 0;
	char *p = str;
	int i;

	while (*p != '\0')
	{
		p++;
		l++;
	}
	a = l - 1;
	for (i = 0; i <= a; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
