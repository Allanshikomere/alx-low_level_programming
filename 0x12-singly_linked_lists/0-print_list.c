#include <stdio.h>
#include "lists.h"

/**
 * print_list -the elements of a linked ist will be printed
 * @h: pointer to the list_t list that wil be printed
 * Return: the number of nodes to be printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}

