#include "main.h"

/**
*_strdup - duplicate the buffer
*@str: string
*Return: pointer, points to the same value of an pointer
*/
char *_strdup(char *str)
{
	int i, j;
	char *p;

	if (str == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p = malloc(i + 1);
	}
	if (p == 0)
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
