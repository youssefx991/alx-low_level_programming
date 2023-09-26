#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: pointer to head
 * @index: index of node to be deleted
 *
 * Return: 1(success) 0(failure)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *deleted_node, *tmp;

	if (!head)
		return (-1);

	i = 0;
	if (index == 0)
	{
		deleted_node = *head;
		*head = deleted_node->next;
		free(deleted_node);
		return (1);
	}
	tmp = *head;

	while (tmp)
	{
		if (i == index - 1)
		{
			deleted_node = tmp->next;
			tmp->next = deleted_node->next;
			free(deleted_node);
			return (1);
		}
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
