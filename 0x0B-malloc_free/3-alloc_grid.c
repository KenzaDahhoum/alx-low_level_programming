#include "main.h"
/**
*alloc_grid - function that returns a pointer to
*a 2 dimensional array of integers.
*@width: array's width
*@height: arrays's height
*Return: pointer
*/
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	p = malloc(height * sizeof(int *));
	if (p == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
