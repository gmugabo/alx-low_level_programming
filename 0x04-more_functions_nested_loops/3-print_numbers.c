#include "main.h"

/**
 * print_numbers - prints numbersfrom 0 to 9
 * Return: nothing
 */

void print_numbers(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        char c = i + 48;
        _putchar(c);
    }

    _putchar('\n');
}
