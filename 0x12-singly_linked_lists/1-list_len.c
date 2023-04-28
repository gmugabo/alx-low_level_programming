#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *first = h;

	while (first != NULL)
	{
		n++;
		first = first->next;
	}

	return (n);
}
