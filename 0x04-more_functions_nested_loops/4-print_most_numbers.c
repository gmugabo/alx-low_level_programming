#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line, except 2 and 4
 * Return: nothing
 */

void print_most_numbers(void)
{
    int i;
    char c;

    for (i = 0; i < 10; i++)
    {
        if (i == 2 || i == 4)
        {
            continue;
        }

        c = i + 48;
        _putchar(c);
    }

    _putchar('\n');
}
