#include "lists.h"

/**
 * add_nodeint - adds node at start of list
 * @head: pointer to head
 * @n: value to add
 *
 * Return: address of new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!head || !node)
		return (NULL);

	node->next = NULL;
	node->n = n;

	if (*head)
		node->next = *head;


	*head = node;

	return (node);
}
