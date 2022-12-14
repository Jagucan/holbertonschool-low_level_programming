#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Is the hash table you want to look into.
 * @key: Is the key.
 * Return: The value associated with the element, or NULL.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;
	char *key_dup = NULL;

	if (!ht)
		return (NULL);

	key_dup = strdup(key);
	if (!key_dup)
		return (NULL);

	index = hash_djb2((const unsigned char *)key_dup) % (ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(key_dup, node->key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
