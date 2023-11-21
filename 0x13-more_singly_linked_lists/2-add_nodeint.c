#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 * @head: a double pointer.
 * @n: a const integer variable.
 * Return: the address of new element or null if failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = *head;
	newnode->n = n;
	*head = newnode;

	return (newnode);
}
