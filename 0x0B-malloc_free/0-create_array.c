#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function that creates an array of chars
 *and initializes it with a specific char.
 *@size: size of array
 *@c: the character
 *Return: Returns a pointer to the array, or NULL if it fails
 *NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
