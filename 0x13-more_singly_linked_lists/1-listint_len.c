#include "lists.h"

/**
 *listint_len - function that returns the number of elements
 *in a linked listint_t list.
 *@h: Pointer to the head of the list.
 *Return: int
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	unsigned int i = 0;

	while (p)
	{
		p = p->next;
		i++;
	}
	return (i);
}
