#include "variadic_functions.h"
/**
  *print_strings - print string separated by char
  *@separator: separator between strings
  *@n: strings count
  *Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *p;
	va_list str;

	va_start(str, n);
	while (i++ < n)
	{
		p = va_arg(str, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
