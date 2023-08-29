#include "lists.h"

/**
 * pop_listint – removes the head node from a linked list
* @head: Linked list element pointed to by this pointer
*
 * Return: the data that was deleted from the elements, ,
 *  if the list is empty, it will be 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
