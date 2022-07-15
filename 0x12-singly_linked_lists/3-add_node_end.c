#include "lists.h"
#include <string.h>

int _strlen(const char *str);
list_t *last_node(list_t **head);

/**
 * add_node_end - add a node
 * @head: head
 * @str: string value for new node
 * Return: node
 *
 * Description: Adds a node to the end of a list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head)
		last_node(head)->next = new;
	else
		*head = new;
	return (new);
}

/**
 * _strlen - lenght of a string
 * @str: string
 * Return: lenght
 */
int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * last_node - last node of a linked list
 * @head: head of list
 * Return: address to last node
 */
list_t *last_node(list_t **head)
{
	list_t *end = *head;

	while (end->next)
		end = end->next;
	return (end);
}

