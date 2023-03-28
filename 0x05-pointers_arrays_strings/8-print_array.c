#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: this is the input array
 * @n: this is the length of the array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != -1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}
