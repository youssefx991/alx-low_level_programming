#include "lists.h"

/**
 * add_node - adds node to the list
 * @head: head pointer of list
 * @str: string to be added
 *
 * Return: address of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

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
	node->next = *head;
	*head = node;

	return (node);
}
