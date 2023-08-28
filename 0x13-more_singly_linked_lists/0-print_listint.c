#include "lists.h"

/*
 * print_listint - Lists all the elements of a linked list
 * @h: To print a linked list of type listint_t
 * Return: Nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

