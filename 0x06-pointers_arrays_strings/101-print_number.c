#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: nothing
 */

void print_number(int n)
{
    int divisor = 1, i, res;

    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    while (n / divisor >= 10)
    {
        divisor *= 10;
    }

    while (divisor != 0)
    {
        i = n / divisor;
        res = i % 10;
        _putchar(res + '0');
        divisor /= 10;
    }
}
