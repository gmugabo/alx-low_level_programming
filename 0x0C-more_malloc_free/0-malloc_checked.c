#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: number of bytes to be allocated
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	if (b > 0)
	{
		ptr = malloc(b);
	}
	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
