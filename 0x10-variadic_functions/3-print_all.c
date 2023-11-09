#include "variadic_functions.h"
/**
  *print_all - function that prints anything
  *@format: list of format specifiers
  *Return: void
  */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *separator = "";
	va_list spec;
	char *str_spec;

	va_start(spec, format);
	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, (char)va_arg(spec, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(spec, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(spec, double));
					break;
				case 's':
					str_spec = va_arg(spec, char *);
					if (str_spec == NULL)
						printf("%s%s", separator, str_spec);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(spec);
}
