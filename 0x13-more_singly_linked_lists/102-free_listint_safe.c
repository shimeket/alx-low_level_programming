#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts the number of unique nodes
 * @head: a pointer to the head
 * Return: 0 on success, otherwise the number of unique nodes
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *sloth, *bolt;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	sloth = head->next;
	bolt = (head->next)->next;

	while (bolt)
	{
		if (sloth == bolt)
		{
			sloth = head;
			while (sloth != bolt)
			{
				nodes++;
				sloth = sloth->next;
				bolt = bolt->next;
			}

			sloth = sloth->next;
			while (sloth != bolt)
			{
				nodes++;
				sloth = sloth->next;
			}

			return (nodes);
		}

		sloth = sloth->next;
		bolt = (bolt->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint_t list.
 * The function sets the head to NULL
 * @h: a pointer to the address of the head
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
