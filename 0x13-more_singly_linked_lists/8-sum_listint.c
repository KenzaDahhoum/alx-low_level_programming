#include "lists.h"

/**
 *sum_listint - function that returns the sum of all the data
 *(n) of a listint_t linked list.
 *@head: ptr
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *p = head;
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
