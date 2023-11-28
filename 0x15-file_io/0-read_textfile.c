#include "main.h"

/**
* read_textfile - reads a text file, output to POSIX
* @filename: file namea
* @letters: number of bytes
* Return: 0 if success, otherwise -1
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file;
	ssize_t count, wr;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file);
		return (0);
	}

	count = read(file, buffer, letters);
	if (count == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, count);

	if (wr == -1 || wr != count)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);

	return (count);
}
