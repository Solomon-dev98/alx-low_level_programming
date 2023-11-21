#include "lists.h"

/**
 * print_listint - function that prints all elements of a list.
 * @h: a pointer that points to a var of type listint_t.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h =  h->next;
		count++;
	}

	return (count);
}
