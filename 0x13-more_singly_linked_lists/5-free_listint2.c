#include "lists.h"

/**
 * free_listint2 - frees list of int
 * @head: pointer to head
 *
 * Retunrn: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *node = *head;
	listint_t *tmp;

	if (!head)
		return;

	while (*head)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
}
