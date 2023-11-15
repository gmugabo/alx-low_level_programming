#include "main.h"

/**
 * _sqrt_helper - helper function to find the square root of n
 * @n: number to find the square root of
 * @m: possible square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_helper(int n, int m)
{
    if (m == n)
    {
        return (-1);
    }
    else if (m * m == n)
    {
        return (m);
    }
    else
    {
        return (_sqrt_helper(n, m + 1));
    }
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return (-1);
    }

    else if (n == 0)
    {
        return (0);
    }
    else
    {
        return (_sqrt_helper(n, 1));
    }
}
