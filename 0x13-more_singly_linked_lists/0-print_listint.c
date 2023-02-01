#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list to be printed
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
       	const listint_t *t;
	unsigned int num = 0;
	
	t = h;
	while (t)
	{
		printf("%d\n", t->n);
		num++;
		t = t->next;
	}
	return (num);
}
