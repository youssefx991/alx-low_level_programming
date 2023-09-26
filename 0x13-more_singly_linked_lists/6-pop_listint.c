#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer to head node
 *
 * Return: value of head node
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp = *head;

	if (!head)
		return (0);
	if (!*head)
		return (0);

	n = tmp->n;

	*head = tmp->next;

	free(tmp);

	return (n);
}
