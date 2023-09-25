#include "lists.h"

/**
 * print_listint - prints all elements in list
 * @h: list
 *
 * Return: number of elements
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
