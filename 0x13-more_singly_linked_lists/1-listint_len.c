#include "lists.h"

/**
 * listint_len - prints number of nodes in list
 * @h: list
 *
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{

	size_t i;

	if (!h)
		return (0);

	i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
