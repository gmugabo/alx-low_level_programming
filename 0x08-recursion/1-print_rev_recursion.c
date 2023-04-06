#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
	int rvrs = 0;

	while (s[rvrs])
		rvrs++;
	while (rvrs--)
		_putchar(s[rvrs]);
}
