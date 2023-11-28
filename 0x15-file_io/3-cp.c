#include "main.h"

/**
 * main - Copy the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, exit codes on failure
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        error_exit(97, "Usage: cp file_from file_to\n", NULL, -1);

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
        error_exit(98, "Error: Can't read from file %s\n", argv[1], -1);

    file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (file_to == -1)
        error_exit(99, "Error: Can't write to %s\n", argv[2], file_from);

    while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(file_to, buffer, bytes_read);
        if (bytes_written != bytes_read)
            error_exit(99, "Error: Can't write to %s\n", argv[2], file_from);
    }

    if (bytes_read == -1)
        error_exit(98, "Error: Can't read from file %s\n", argv[1], file_from);

    if (close(file_from) == -1 || close(file_to) == -1)
        error_exit(100, "Error: Can't close fd %d\n", argv[1], file_from);

    return 0;
}

