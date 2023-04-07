#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: number to get the factorial
 *
 * Return: if n is greater than 0 factorial n
 * if n is less than 0 indicate an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
