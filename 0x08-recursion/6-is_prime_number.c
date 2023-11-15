#include "main.h"

/**
 * is_prime_helper - helper function to check if n is divisible by m
 * @n: number to check
 * @m: possible divisor
 *
 * Return: 1 if n is prime, 0 if n is not prime
 */

int is_prime_helper(int n, int m)
{
    if (m == n)
    {
        return (1);
    }

    else if (n % m == 0)
    {
        return (0);
    }
    else
    {
        return (is_prime_helper(n, m + 1));
    }
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 if n is not prime
 */

int is_prime_number(int n)
{
    if (n <= 1)
    {
        return (0);
    }

    else if (n == 2)
    {
        return (1);
    }
    else
    {
        return (is_prime_helper(n, 2));
    }
}
