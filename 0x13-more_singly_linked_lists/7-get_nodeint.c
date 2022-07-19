#include "lists.h"

/**
 * get_nodeint_at_index - get a node at an index (node starts at 0)
 * @head: pointer to first node
 * @index: index
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index && head !=  NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
