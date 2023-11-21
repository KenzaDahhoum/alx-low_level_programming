#include "lists.h"

/**
 *get_nodeint_at_index - function that returns the nth node
 *of a listint_t linked list
 *@head: ptr
 *@index: Index
 *Return: Pointer at specific index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	unsigned int i = 0;

	while (p)
	{
		if (i == index)
		{
			return (p);
		}
		i++;
		p = p->next;
	}
	return (NULL);
}
