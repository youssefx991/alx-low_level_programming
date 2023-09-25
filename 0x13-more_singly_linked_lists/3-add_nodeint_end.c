#include "lists.h"

/**
 * add_nodeint_end - adds node at end
 * @head: pointer to head
 * @n: value
 *
 * Return: address of new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (*head)
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;

		return (new_node);
	}
	*head = new_node;

	return (new_node);
}
