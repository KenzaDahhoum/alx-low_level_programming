#include <stdio.h>
/**
  *main - Entry point
  *Description: alphabet in lowercase, followed by a new line
  *Return: always 0
  */
int main(void)
{	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
