#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: a pointer variable to the list.
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
