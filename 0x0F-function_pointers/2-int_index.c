#include "function_pointers.h"

/**
 * int_index - return the index place if comparison = true
 * else -1
 * @array: array
 * @size: size of elements
 * @cmp: pointer to function of the 3 in main
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int s = 0;

	if (array && size > 0 && cmp)
	{
		while (s < size)
		{
			if (cmp(array[s]))
				break;
			s++;
		}
	}
	return (s < size ? s : -1);
}
