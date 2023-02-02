#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: address of the first node
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
