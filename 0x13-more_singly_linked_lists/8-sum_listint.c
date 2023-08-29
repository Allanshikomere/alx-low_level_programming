#include "lists.h"

/*
 *    sum_listint - Calculates the total of a listint_t list
 * @head: Linked list's first node
 * Return: Sum of the results
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
