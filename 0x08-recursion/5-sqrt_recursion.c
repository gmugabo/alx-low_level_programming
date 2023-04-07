#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n:number to calculate the square root
 *
 * Return: resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (helper_sqrt_recursion(n, 1));
	}
}

/**
 * helper_sqrt_recursion - helper function
 * Description: 'helper function'
 * @n: caluculate the square root
 * @i: iterator
 *
 * Return: the square root
 */

int helper_sqrt_recursion(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (helper_sqrt_recursion(n, i + 1));
	}
}
