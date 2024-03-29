#include "lists.h"

/**
  *print_dlistint - prints all the elements of a dlistint_t list
  *@h: adress of head node
  *
  *Return: size of list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t el = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		el++;
	}
	return (el);
}
