#include "main.h"

/**
*_strdup - function returns a pointer to a new string
*which is a duplicate of the string str
*Memory for the new string is obtained with malloc
*and can be freed with free.
*@str: string
*Return: pointer, points to the same value of an pointer
*/
char *_strdup(char *str)
{
	int i, j;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p = malloc(i + 1);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	p[j] = '\0';

	return (p);
}
