#include "variadic_functions.h"
/**
  *print_numbers - output numbers in the params
  *@separator: char or stirng to be printed between numbers
  *@n: numbers count
  *Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list nbr;

	va_start(nbr, n);
	while (i++ < n)
	{
		printf("%d", va_arg(nbr, int));
		if (separator != NULL && (i < n))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nbr);

}
