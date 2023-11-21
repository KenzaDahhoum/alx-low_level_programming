#include "lists.h"

/**
  *free_listint - function that frees a listint_t list
  *@head: pointer
  *Return: void
  */

void free_listint(listint_t *head)
{
	listint_t *p = head;
	listint_t *n = NULL;

	while (p)
	{
		n = p->next;
		free(p);
		p = n;
	}

}
