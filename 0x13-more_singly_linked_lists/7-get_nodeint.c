#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint - returns the nth node of a listint_t linked list.
 * @head: address of the first node in a list
 * @index: position of the node
 * Return: node address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;

	if (head == NULL)
		return (NULL);
	for (y = 0; y < index; y++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
