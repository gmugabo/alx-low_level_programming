#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	count = 1 + listint_len(h->next);

	return (count);
}
