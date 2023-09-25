#include "lists.h"

/**
 * free_listint - frees list of int
 * @head: head pointer
 *
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	if (!head)
		return;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
