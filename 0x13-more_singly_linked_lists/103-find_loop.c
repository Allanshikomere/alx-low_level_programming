#include "lists.h"

/*
 *     find_listint_loop - in the linked list it finds the loop
 *
 a*
 *  @head: this searchs for a linked list
 *
k * Return: Null or the address of the loop's starting node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			sloow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}

