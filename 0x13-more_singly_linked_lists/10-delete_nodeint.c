#include "lists.h"

/**
 *delete_nodeint_at_index - function that deletes the node at index
 *of a listint_t linked list
 *@head: ptr
 *@index: index
 *Return: 1 othewise, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *b = NULL;
	unsigned int i = 0;

	if (!*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = p->next;
		free(p);
		return (1);
	}
	while (i != index)
	{
		if (!p)
		{
			return (-1);
		}
		b = b;
		i++;
		p = p->next;
	}
	b->next = p->next;
	free(p);
	return (1);
}
