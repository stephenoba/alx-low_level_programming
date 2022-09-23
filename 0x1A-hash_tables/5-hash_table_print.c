#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int i;
	char *repr, *key, *value;
	unsigned long int limit = 40000;

	repr = malloc(sizeof(char) * limit);
	if (!repr)
		return;

	i = 0;
	repr[0] = '\0';
	strcat(repr, "{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			current_node = ht->array[i];
			while (current_node)
			{
				key = current_node->key;
				value = current_node->value;
				strcat(repr, "'");
				strcat(repr, key);
				strcat(repr, "': ");
				strcat(repr, "'");
				strcat(repr, value);
				strcat(repr, "'");
				current_node = current_node->next;
				if (current_node)
					strcat(repr, ", ");
			}
		}
		i++;
		if (ht->array[i])
			strcat(repr, ", ");
	}
	strcat(repr, "}");
	printf("%s\n", repr);
}
