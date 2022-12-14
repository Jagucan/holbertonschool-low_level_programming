#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: Return the head.
*/

int pop_listint(listint_t **head)
{
	listint_t *n_node;
	int n;

	if (!(*head))
		return (0);

	n_node = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(n_node);

	return (n);
}
