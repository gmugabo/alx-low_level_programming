#include "lists.h"

/**
 * add_nodeint - adds new node at start of a linked list
 * @head: pointer to the first node in the list
 * @n : data to insert in the new node
 *
 * Return: pointer to the new node, return NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;

		if (*head)
			new_node->next = *head;

		*head = new_node;
	}

	return (new_node);
}
