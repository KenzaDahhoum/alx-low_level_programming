#include "main.h"

/**
 * is_prime_number - Find if a number is prime using recursion
 * @n: Number to check
 * Return: 1 if prime, 0 if not prime
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (recursive_prime_helper(n, 2));
}

/**
 * recursive_prime_helper - Helper function to check for prime recursively
 * @n: Number to check for primality
 * @i: Current divisor to check
 * Return: 1 if prime, 0 if not prime
 */

int recursive_prime_helper(int n, int i)
{
	if ((i * i) > n)
		return (1);

	if ((n % i) == 0)
		return (0);

	return (recursive_prime_helper(n, i + 1));
}
