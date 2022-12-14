#include "lists.h"

/**
 * print_list - Prints all the elements of a list.
 * @h: Elements on the list.
 * Return: Return the number of nodes.
*/

size_t print_list(const list_t *h)
{
	size_t n_node = 0;

	if (!h)
		return (n_node);

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	    n_node++;
	}

	return (n_node);
}
