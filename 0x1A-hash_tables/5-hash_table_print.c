#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int i = 0, limit = 40000;
	int flag = 0;
	char *repr;

	repr = malloc(sizeof(char) * limit);
	if (!repr || !ht)
	{
		free(repr);
		return;
	}

	repr[0] = '\0';
	strcat(repr, "{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			current_node = ht->array[i];
			while (current_node)
			{
				strcat(repr, "'");
				strcat(repr, current_node->key);
				strcat(repr, "': '");
				strcat(repr, current_node->value);
				strcat(repr, "'");
				flag = 1;
				current_node = current_node->next;
				if (current_node)
					strcat(repr, ", ");
			}
		}
		i++;
		if (ht->array[i] && flag)
			strcat(repr, ", ");
	}
	strcat(repr, "}");
	printf("%s\n", repr);
	free(repr);
}
