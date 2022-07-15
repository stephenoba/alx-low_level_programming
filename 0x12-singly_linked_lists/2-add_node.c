#include "lists.h"
#include <string.h>

int _strlen(const char *str);

/**
 * add_node - add a node
 * @head: head
 * @str: string value for new node
 *
 * Description: Adds a node to the begining of a list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
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
