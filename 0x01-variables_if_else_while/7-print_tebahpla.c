#include <stdio.h>
/**
  *main - Entry point
  *Description: prints the lowercase alphabet in reverse
  *Return: always 0
  */
int main(void)
{
	int i = 122;

	for (; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
