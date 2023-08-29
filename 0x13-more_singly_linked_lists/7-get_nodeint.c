#include "lists.h"

/*
 * get the_node int_at_index – in index-based link list function that returns a node at a specific position
* @head: An initial node in a linked list
* @index: index of the node to return
 *
 * Return: Node pointer, or NULL if no node is found
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
