#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
*_realloc - function that reallocates a memory block
*using malloc and free
*@ptr: pointer to the memory previously allocated with a call to malloc
*@old_size: size of pointer
*@new_size: size of the new memory to be allocated
*Return: pointer to the address of the new memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem_block;
	unsigned int i;

	if (ptr == NULL)
	{
		mem_block = malloc(new_size);
		return (mem_block);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		mem_block = malloc(new_size);
		if (mem_block != NULL)
		{
			for (i = 0; i < old_size; i++)
			{
				*((char *)mem_block + 1) = *((char *) ptr + 1);
			}
			free(ptr);
			return (mem_block);
		}
		else
		{
			return (NULL);
		}
	}
}
