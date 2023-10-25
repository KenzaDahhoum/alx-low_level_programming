#include "main.h"
#include<stdio.h>
/**
  *print_diagsums - function that prints the sum of the two diagonals
  *of a square matrix of integers
  *@a: matrix
  *@size: size of the matrix
  *Return: 0
  */
void print_diagsums(int *a, int size)
{
	int i, sm1 = 0, sm2 = 0;

	for (i = 0; i < size; i++)
	{
		sm1 = sm1 + a[i];
		a = a + size;
	}
	a = a - size;

	for (i = 0; i < size; i++)
	{
		sm2 = sm2 + a[i];
		a = a - size;
	}
	printf("%d, %d\n", sm1, sm2);
}
