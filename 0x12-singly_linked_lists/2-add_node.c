#include "lists.h"

/**
 * add_node - add a node to the list
 * @head: the head of the list
 * @str: node's name
 * Return: address of the node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	unsigned int lenght = 0;

	while (str[lenght])
		lenght++;

	list = malloc(sizeof(list_t));
	if (!list)
	{
		return (NULL);
	}
	list->str = strdup(str);
	list->len = lenght;
	list->next = *head;
	*head = list;

	return (*head);
}
