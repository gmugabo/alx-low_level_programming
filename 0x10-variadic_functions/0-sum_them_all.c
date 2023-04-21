#include "variadic_functions.h"
#include  <stdarg.h>

/**
 * sum_them_all - returns sum of all parameters
 * @n: number of paramters passed
 * @...: variable number of parameters to get sum
 *
 * Return: If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
