#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*array_range - function that creates an array of integers
*@min: min
*@max: max
*Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *p, i, size = 0;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	p = (int *)malloc(size * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = min++;
	}
	return (p);
}

