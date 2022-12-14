#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a list.
 * @head: Pointer to the head of the list.
 * @n: Elements to add to the list.
 * Return: Return  the address of the new element, or NULL if it failed.
*/


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *l_node;

	n_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;

	if (!head)
		head = &n_node;

	if (!(*head))
	{
		n_node->next = NULL;
		*head = n_node;
	}

	else
	{
		while (l_node->next)
			l_node = l_node->next;
		l_node->next = n_node;
		n_node->prev = l_node;
	}

	l_node = *head;
	return (l_node);
}
