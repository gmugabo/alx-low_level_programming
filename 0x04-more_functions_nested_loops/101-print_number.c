#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: nothing
 */

void print_number(int n)
{
    unsigned int abs_n;
    if (n < 0)
    {
        _putchar('-');

        abs_n = -n;
    }

    else
    {
        abs_n = n;
    }

    if (abs_n >= 10)
    {
        print_number(abs_n / 10);
    }

    _putchar((abs_n % 10) + '0');
}
