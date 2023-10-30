#include "main.h"

/**
*_strdup - function that returns a pointer to a newly allocated space in memory
*which contains a copy of the string given as a parameter.
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
