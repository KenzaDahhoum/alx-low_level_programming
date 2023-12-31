#include "lists.h"

/**
 *add_nodeint - function that adds a new node at the beginning
 *of a listint_t list
 *@head: ptr to pointer
 *@n: Int
 *Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node)
	{
		node->n = n;
		node->next = *head;
		*head = node;
	}
	else
	{
		return (NULL);
	}
	return (node);
}
