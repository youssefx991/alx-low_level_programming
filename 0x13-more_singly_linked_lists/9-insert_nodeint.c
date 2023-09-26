#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node to list
 * @head: pointer to head
 * @idx: index to insert into
 * @n: value of node
 *
 * Return: address of new elemnt
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *tmp;
	unsigned int i;

	if (!head || !new_node)
		return (NULL);

	i = 0;
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		tmp = *head;

		while (tmp)
		{
			if (i == idx - 1)
			{
				new_node->next = tmp->next;
				tmp->next = new_node;
				return (new_node);
			}
			i++;
			tmp = tmp->next;
		}
		free(new_node);
		return (NULL);
	}
}
