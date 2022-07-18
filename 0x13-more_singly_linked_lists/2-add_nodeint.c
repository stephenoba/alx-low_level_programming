#include "lists.h"

/**
 * add_nodeint - add a node to the begining of a singly linked list
 * @head: pointer to the head
 * @n: node value
 *
 * Return: node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	/* make new_node head */
	new_node->next = *head;
	/* point the reference to the head to new_node */
	*head = new_node;
	return (new_node);
}
