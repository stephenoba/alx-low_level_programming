#include "lists.h"

/**
 * free_list - frees a linked list.
 * @head: head.
 **/
void free_list(list_t *head)
{
	list_t *temp_head;
	list_t *temp_next;

	if (head)
	{
		temp_head = head;
		temp_next = head->next;
		while (temp_next)
		{
			free(temp_head->str);
			free(temp_head);
			temp_head = temp_next;
			temp_next = temp_next->next;
		}
		free(temp_head->str);
		free(temp_head);
	}
}
