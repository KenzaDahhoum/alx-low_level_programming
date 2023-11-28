#include "main.h"

/**
  *read_textfile - function that read a text file
  *and prints it to the POSIX standard output.
  *@filename: file name
  *@letters: nbr of letters it should read and print
  *Return: 0 if success otherwise -1
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *p;
	int i;
	ssize_t nbr, w;

	if (!filename)
	{
		return (0);
	}
	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		return (0);
	}
	p = malloc(sizeof(char) * letters);
	if (!p)
	{
		close(i);
		return (0);
	}
	nbr = read(i, p, letters);
	if (nbr == -1)
	{
		free(p);
		close(i);
		return (0);
	}
	w = write(STDOUT_FILENO, p, nbr);
	if (w == -1 || w != nbr)
	{
		free(p);
		close(i);
		return (0);
	}

	free(p);
	close(i);
	return (nbr);
}
