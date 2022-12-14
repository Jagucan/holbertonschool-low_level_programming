#include "lists.h"

/**
 * free_list - frees a list.
 * @head: Pointer to list.
*/

void free_list(list_t *head)
{
	list_t *aux;

	while (head)
	{
		aux = head->next;
		free(head->str);
		free(head);
		head = aux;
	}
}
