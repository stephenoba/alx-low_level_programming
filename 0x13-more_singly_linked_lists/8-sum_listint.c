#include "lists.h"

/**
 * sum_listint - sums values of a list with integers
 * @head: pointer to first node
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

