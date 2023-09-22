#include "lists.h"

/**
 * _strlen - returns length of string
 * @s: string
 *
 * Return: length of string
*/
int _strlen(char *s)
{
	int i;

	i = 0;

	if (!s)
		return (0);
	while (*s)
	{
		i++;
		s++;
	}

	return (i);
}

/**
 * print_list - prints a list
 * @h: list to be printed
 *
 * Return: size of list
*/
size_t print_list(const list_t *h)
{
	int i;

	i = 0;

	while (h)
	{
		i++;
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nill)");
		h = h->next;
	}
	return (i);
}
