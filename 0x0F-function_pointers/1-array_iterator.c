#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print each array element on new line
 * @array: array
 * @size: number of elements to print
 * @action: pointer to print in regular or hex
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a = 0;

	if (array && action)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
