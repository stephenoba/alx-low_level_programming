#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print linked list
 * @h: Head of the list
 * Return: number of nodes
 *
 * Description: prints the nodes in a singly linked list
 */
size_t print_list(const list_t *h)
{
	size_t i;
	list_t *temp;
	int flag = 1;

	temp = malloc(sizeof (list_t));
	if (temp == NULL)
		return (-1);
	*temp = *h;
	i = 0;
	while (flag)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", temp->len, temp->str);
		i++;
		if (temp->next == NULL)
			break;
		*temp = *temp->next;
	}
	return (i);
}
