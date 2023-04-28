#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of a linked list
 * @h: pointer to list_t list to print
 *
 * Return:number of nodes
 */ 

size_t print_list(const list_t *h)
{	
	size_t i = 0;
	const list_t *first = h;

	while (first != NULL)
	{	
		printf("[%u] %s\n", first->len, first->str ? first->str : "(nil)");
		first = first->next;

		i++;
	}

	return (i);
}
