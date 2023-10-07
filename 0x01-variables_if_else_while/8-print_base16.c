#include <stdio.h>
/**
  *main - Entry point
  *Description: prints all the numbers of base 16 in lowercase
  *Return: always 0
  */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');
}
