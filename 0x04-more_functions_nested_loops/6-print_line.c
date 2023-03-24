#include "main.h"

/**
 * print_lines - print a straight line
 * @n: number of times
 * Return: Always 0
 */

void print_lines(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
