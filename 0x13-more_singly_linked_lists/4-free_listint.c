#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
	return;
}

