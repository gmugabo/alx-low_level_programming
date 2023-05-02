#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to the first element in linked list
 *
 * Return: data inside the elements that is deleted, 0 if list
 * is empty
 */

int pop_listint(listint_t **head)
{
	int count = 0;
	listint_t *temp = *head;

	if (head && *head)
	{
		count = (*head)->n;

		*head = (*head)->next;
		free(temp);
	}

	return (count);
}
