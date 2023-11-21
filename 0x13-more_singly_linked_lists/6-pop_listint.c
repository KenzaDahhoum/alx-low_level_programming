#include "lists.h"

/**
 *pop_listint - function that deletes the head node of
 *a listint_t linked list, and returns the head node’s data (n).
 *@head: ptr
 *Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *p = *head;
	int d;

	if (!head || !(*head))
	{
		return (0);
	}

	d = p->n;
	*head = p->next;
	p->next = NULL;
	free(p);

	return (d);
}
