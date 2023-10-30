#include "main.h"

/**
* str_concat -  concatenates two strings.
* @s1: firt string
* @s2: second string
* Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, k, m;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	p = malloc(i * sizeof(*s1) + j * sizeof(*s2));
	if (p == 0)
	{
		return (NULL);
	}
	for (k = 0, m = 0; k < i + j; k++)
	{
		if (k < i)
		{
			p[k] = s1[k];
		}
		else
		{
			p[k] = s2[m++];
		}
	}
	return (p);
}
