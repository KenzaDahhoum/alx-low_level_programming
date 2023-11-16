#include "lists.h"

/**
*print_list - function that prints all the elements of a list_t list
*
*@h:pointer to the list
*
*Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t i = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		i++;
		ptr = ptr->next;
	}
	return (1);
}
