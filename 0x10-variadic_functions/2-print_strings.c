#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: tring to be printed between strings.
 * @n: The number fnction.
 * @...: strings to be printed.
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str1;
	unsigned int index;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		str1 = va_arg(ap, char *);

		if (str1 == NULL)
			printf("(nil)");
		else
			printf("%s", str1);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
