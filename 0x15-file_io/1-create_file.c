#include "main.h"

/**
 * create_file - create a file
 * @filename: file name to be created
 * @text_content: buffer
 * Return: 1 on success, -1 Otherwise
 */
 
int create_file(const char *filename, char *text_content)
{
	int fdesc;
	int i = 0;
	int size;

	fdesc = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (fdesc == -1 || filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (*(text_content + i))
		i++;

	size = write(fdesc, text_content, i);

	if (size == -1)
		return (-1);

	close(fdesc);
	return (1);
}
