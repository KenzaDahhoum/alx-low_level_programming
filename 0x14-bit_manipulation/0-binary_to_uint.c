#include "main.h"

/**
  *binary_to_uint - converts the binary number to a postive integers
  *@b: ptr to 0 and 1 chars
  *Return: unsigned  int number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = result <<  1;
		result = result + (*b - '0');
		b++;
	}
	return (result);

}
