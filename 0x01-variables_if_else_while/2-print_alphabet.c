#include <stdio.h>
/**
  *main - Entry point
  *Description: alphabet in lowercase, followed by a new line
  *Return: always 0
  */
int main(void)
{
	int i = 97;

	for (; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
