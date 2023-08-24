#include <stdio.h>
#include "custom_list.h"

/*
 * print_Lists : it will print all the elements of the linked list
 * h - the pointer to the list_t of the selected list to be printed out
 * return- it shows the number of odes that rae printed
 */
size_t print_list(const list_t *h
{
	size_t s=0;
	while (h)
	{
	if (!h->str)
		printf("[0] (nil)\n");
		else 
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	reurn (s);
}
	
