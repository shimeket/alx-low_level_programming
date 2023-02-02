#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list.
 * @head: address of the first node of a list.
 */
void free_listint(listint_t *head)
{
	listint_t *tf, *tf1;

	tf = head;
	while (tf != NULL)
	{
		tf1 = tf->next;
		free(tf);
		tf = tf1;
	}
}
