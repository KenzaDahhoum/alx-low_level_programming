#include "main.h"

/**
  *reverse_array - function that reverses the content of an array of integers
  *@n: number of element
  *@a: array to reserve
  *Return a
  */

void reverse_array(int *a, int n)
{
	int rev, i;

	for (i = 0; i <= (n / 2) - 1; i++)
	{
		rev = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = rev;
	}
}
