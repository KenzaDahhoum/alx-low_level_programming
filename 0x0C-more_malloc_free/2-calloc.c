#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_calloc - unction that allocates memory for an array, using malloc
*of size bytes each and returns a pointer to the allocated memory
*@nmemb: number of bytes to allocate for the array of nmemb elements
*@size: size of the array
*Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if ((nmemb <= 0) || (size <= 0))
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)(p))[i] = 0;
	}
	return (p);
}
