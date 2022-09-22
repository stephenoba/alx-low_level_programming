#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table
 * @ht: hash table to update
 * @key: key
 * @value: value
 *
 * Return: 1 on success and 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;

	if (strlen(key) == 0 || !key)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
		new_node->next = ht->array[index];
	else
		new_node->next = NULL;
	ht->array[index] = new_node;
	return (1);
}
