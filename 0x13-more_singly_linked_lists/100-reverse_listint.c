#include "lists.h"

/**
 * reverse_listint – A linked list  is reversed
* @head: The first node in the list is pointed to by this pointer
*
*
*
 * Return: A pointer to the first node of the new list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
