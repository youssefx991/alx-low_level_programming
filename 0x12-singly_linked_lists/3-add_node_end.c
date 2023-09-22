#include "lists.h"

/**
 * add_node_end - adds node at end of list
 * @head: pointer to head
 * @str: string value
 *
 * Return: address of newly added element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (!head || !node)
		return (NULL);

	if (str)
	{
		node->str = strdup(str);

		if (!node->str)
		{
			free(node);
			return (NULL);
		}
		node->len = _strlen(node->str);
	}

	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
	}
	else
	{
		*head = node;
	}

	return (node);
}
