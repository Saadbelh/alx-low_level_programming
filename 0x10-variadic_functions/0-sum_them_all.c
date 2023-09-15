#include"variadic_functions.h"
/**
 * sum_them_all - sum of all
 * @n: int numbre
 * @...: sum
 *
 * Return: sum int
 */
int sum_them_all(const unsigned int n, ...)
{
	int som = 0, i = 0;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		som += va_arg(ap, int);
	va_end(ap);
	return (som);
}
