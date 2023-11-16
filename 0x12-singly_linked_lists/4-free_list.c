#include "lists.h"

/**
 *free_list - function that frees a list_t list.
 *@head: head pointer
 */
void free_list(list_t *head)
{
	list_t *tem;

	while (head)
	{
		tem = head->next;
		free(head->str);
		free(head);
		head = tem;
	}
}
