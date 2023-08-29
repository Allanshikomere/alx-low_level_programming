#include "lists.h"

/*
 * free_listint2 - allows a linked list to be freed 
 * @head: a pointer to the listint_t list that should be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*hea = NULL;
}
