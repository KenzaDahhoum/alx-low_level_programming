#include "main.h"
/**
  *swap_int - function that swaps the values of two integers
  *@a: integr
  *@b: integer
  *Return: void
  */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
