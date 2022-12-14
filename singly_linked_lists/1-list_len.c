#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Parameters.
 * Return: Returns the number of elements.
*/
size_t list_len(const list_t *h)
{
	size_t n_list = 0;

	if (!h)
		return (n_list);

	while (h)
	{
		h = h->next;
		n_list++;
	}

	return (n_list);
}
