#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *h = *head;

	while (h != NULL)
	{
		temp = h;
		h = h->next;
		free(temp);
	}
	*head = NULL;
	return;
}
