#include "function_pointers.h"

/**
  *int_index - function that searches for an integer
  *@array: pointer
  *@size: size of array
  *@cmp: compare function
  *Return: the integer index
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == ((void *)0) || cmp == NULL)
	{
		return (-1);
	}
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	return (-1);
}
