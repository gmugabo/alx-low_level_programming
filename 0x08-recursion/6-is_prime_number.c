#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number or not
 * @n: number to be checked
 *
 * Return: 1 if n is a prime number and 0 if it's not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helper_prime(n, 2));
	}
}

/**
 * helper_prime - helper function
 * Description: 'function to help is_prime_number'
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime and 0 if it's not
 */

int helper_prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (helper_prime(n, i + 1));
	}
}
