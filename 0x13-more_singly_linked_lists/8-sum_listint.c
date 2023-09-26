#include "lists.h"

/**
 * sum_listint - returns sum of data in nodes
 * @head: head pointer
 *
 * Return: sum of data in nodes
*/
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp = head;

	if (!head)
		return (0);

	sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
