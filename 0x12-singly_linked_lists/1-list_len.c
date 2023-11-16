#include "lists.h"

/**
 *list_len - function that returns the number of elements
 *in a linked list_t list.
 *@h: head
 *Return: lenght
*/

size_t list_len(const list_t *h)
{
	const list_t *p = h;
	size_t lenght = 0;

	while (p != NULL)
	{
		lenght += 1;
		p = p->next;
	}
	return (lenght);
}
