#include "main.h"

/**
 * main - Entry point for the cp program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", argv[1], -1);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		error_exit(99, "Error: Can't write to %s\n", argv[2], file_from);
	}

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			error_exit(99, "Error: Can't write to %s\n", argv[2], file_from);
		}
	}

	if (bytes_read == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", argv[1], file_from);
	}

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		error_exit(100, "Error: Can't close fd %d\n", argv[1], file_from);
	}

	return (0);
}

