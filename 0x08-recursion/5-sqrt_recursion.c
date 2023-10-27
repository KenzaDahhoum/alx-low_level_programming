#include "main.h"

/**
 * _sqrt_recursion - return natural square root of number
 * -1 for negative or does not have a natural square root
 * @n: number to be sqrt
 * Return: sqrt values otherwise -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 2));
}

/**
 * _sqrt_recursion_helper - calculate the sqrt
 * @n: number to be squared
 * @i: number of occurrences
 * Return: number of occurences
 */

int _sqrt_recursion_helper(int n, int i)
{
	if (n < 0 || (i * i) > n)
		return (-1);
	else if ((i * i) == n)
		return (i);

	return (_sqrt_recursion_helper(n, i + 1));
}
