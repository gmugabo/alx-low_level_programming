#include "main.h"

/**
 * swap_int - swap to variable integers
 * @a: swaps and stores address of a
 * @b: swaps and stores address of b
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
