#include "lists.h"

/**
 *print_listint - function that prints all the elements of a listint_t list
 *@h: ptr to the head
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	unsigned int lenght = 0;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		lenght++;
	}
	return (lenght);
}
