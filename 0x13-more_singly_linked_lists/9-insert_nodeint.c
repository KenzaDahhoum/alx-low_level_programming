#include "lists.h"

/**
 *insert_nodeint_at_index - function that inserts
 *a new node at a given positio
 *@head: Pointer
 *@idx: Index
 *@n: Integer
 *Return: Address of the newly inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p = *head;
	listint_t *insrt = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!insrt)
	{
		return (NULL);
	}
	insrt->n = n;
	insrt->next = NULL;

	if (idx == 0)
	{
		insrt->next = *head;
		*head = insrt;
		return (insrt);
	}
	while (p)
	{
		if (i == idx - 1)
		{
			insrt->next = p->next;
			p->next = insrt;
			return (insrt);
		}
		i++;
		p = p->next;
	}
	free(insrt);
	return (NULL);
}

