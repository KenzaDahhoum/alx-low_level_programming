#include "lists.h"

/**
 *add_nodeint_end - function that adds a new node at the end
 *of a listint_t list
 *@head: ptr to pointer
 *@n: Int
 *Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));

	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (!(*head))
	{
		*head = node;
	}
	else
	{
		listint_t *new_n = *head;

		while (new_n->next)
		{
			new_n = new_n->next;
		}
		new_n->next = node;
	}
	return (node);
}

