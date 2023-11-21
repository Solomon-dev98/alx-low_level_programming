#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of list
 * @head: a double pointer variable of type listint_t.
 * @n: an element of the list.
 * Return: the address of  the new element or NULL per failure.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	temp = 0;
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = 0;
	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);
}
