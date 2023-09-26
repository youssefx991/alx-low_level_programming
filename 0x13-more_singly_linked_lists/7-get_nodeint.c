#include "lists.h"

/**
 * get_nodeint_at_index - get nth node
 * @head: head pointer
 * @index: index of node
 *
 * Return: address of nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = head;

	i = 0;

	if (!head)
		return (NULL);

	while (tmp)
	{
		if (i == index)
		{
			return (tmp);
		}
		i++;
		tmp = tmp->next;
	}

	return (NULL);
}
