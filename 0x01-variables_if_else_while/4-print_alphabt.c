#include <stdio.h>
/**
  *main - Entry point
  *Description: prints the alphabet in lowercase, except q and e
  *Return: always 0
 */
int main(void)
{
	int i = 97;

	for (; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
