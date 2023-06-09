#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars and
 * initializes it with a specific char
 *
 * @size: size of memory of array
 * @c: character to be initialized
 *
 * Return: pointer to array
 * null if error or size zero
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	char *ptr;

	str = malloc(size * sizeof(char));

	if (str == NULL || size == 0)
		return (NULL);
	ptr = str;

	while (size--)
		*ptr++ = c;
	return (str);
}
