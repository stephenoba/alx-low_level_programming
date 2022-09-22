#include "hash_tables.h"

/**
 * hash_table_get - Get value from Hash table
 * @ht: Hash table
 * @key: key
 *
 * Return: Value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (strlen(key) == 0 || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
