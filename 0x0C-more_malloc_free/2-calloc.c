#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with constant byte
 * @s: memory area to be filled
 * @b: character to copy
 * @n: number of times to copy b
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		*(ptr++) = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: sie of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
