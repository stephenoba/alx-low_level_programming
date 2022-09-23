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
	hash_node_t *current_node, *new_node = NULL;
	char *new_value;

	if (ht == NULL || *key == '\0' || !key || !value)
		return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = new_value;
			return (1);
		}
		current_node = current_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(new_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		free(new_value);
		return (0);
	}
	new_node->value = new_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
