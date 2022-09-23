#include "hash_tables.h"

/**
 * free_list - free nodes in list
 * @head: head of list
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	temp = head;
	while (temp)
	{
		temp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}

/**
 * hash_table_delete - Delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; ht != NULL && i < ht->size; i++)
	{
		free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
