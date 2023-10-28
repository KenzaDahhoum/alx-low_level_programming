#include <stdio.h>

/**
* main - prints all argumetns per line
* @argc: number of arguments
* @argv: command line arguments
* Return: int
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
