#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: a pointer to the head
 * Return: address of the node, otherwise NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sloth, *bolt;

	if (head == NULL || head->next == NULL)
		return (NULL);
	sloth = head->next;
	bolt = (head->next)->next;

	while (bolt)
	{
		if (sloth == bolt)
		{
			sloth = head;

			while (sloth != bolt)
			{
			sloth = sloth->next;
			bolt = bolt->next;
			}

			return (sloth);
		}
		sloth = sloth->next;
		bolt = (bolt->next)->next;
	}

	return (NULL);
}
