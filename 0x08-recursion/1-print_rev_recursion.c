#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
	int rvrs = 0;
	char *r = s;

	while (*r)
	{
		rvrs++;
		r++;
	}
	while (rvrs > 0)
	{
		_putchar(*(s + rvrs - 1));
		rvrs--;
	}
}
