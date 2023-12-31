#include "main.h"

/**
 *flip_bits - returns the number of bits you would need
 *to flip to get from one number to another
 *@n: first
 *@m: second
 *Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nor_m;
	unsigned long int lenght, count;

	nor_m = n ^ m;
	lenght = sizeof(n) * 8;
	count = 0;
	while (lenght--)
	{
		if (nor_m & 1)
		{
			count++;
		}
		nor_m >>= 1;
	}
	return (count);
}
