#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argv: argument list
* @argc: number of arguments
* Return: EXIT_SUCCESS otherwise 1 failure
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int n1, n2, ml;

		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		ml = n1 * n2;
		printf("%d\n", ml);
		return (0);
	}
}
