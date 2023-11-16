#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a list_t list
 *@head: a node to be added
 *@str: str of the node
 *Return: Address of the new node, or NULL on failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list = malloc(sizeof(list_t));

	if (!list)
	{
		return (NULL);
	}
	list->str = strdup(str);

	if (list->str == NULL)
	{
		free(list);
		return (NULL);
	}

	list->len = strlen(str);
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
	}
	else
	{
		list_t *new = *head;

		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = list;
	}

	return (list);
}
