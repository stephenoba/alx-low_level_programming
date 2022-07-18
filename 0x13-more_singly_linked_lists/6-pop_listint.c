#include "lists.h"

/**
 * pop_listint - removes the first node of a linked list
 * @head: pointer to head
 * Return: 0 always
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);
	*head = temp->next;
	i = temp->n;
	free(temp);
	return (i);
}
