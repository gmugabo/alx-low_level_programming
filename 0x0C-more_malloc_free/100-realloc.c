#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated by malloc
 * @old_size: size of memory for ptr
 * @new_size: new size of memory block
 *
 * Return: pointer to newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr0;
	char *prev_ptr;
	unsigned int s;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	ptr0 = malloc(new_size);

	if (!ptr0)
	{
		return (NULL);
	}
	prev_ptr = ptr;

	if (new_size < old_size)
	{
		for (s = 0; s < new_size; s++)
		{
			ptr0[s] = prev_ptr[s];
		}
	}
	else
	{
		for (s = 0; s < old_size; s++)
		{
			ptr0[s] = prev_ptr[s];
		}
	}
	free(ptr);
	return (ptr0);
}
