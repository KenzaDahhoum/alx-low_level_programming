#include "main.h"

/**
  *create_file - create a file
  *@filename: file name
  *@text_content: buffer
  *Return: 1 on success otherwise -1;
  */
int create_file(const char *filename, char *text_content)
{
	int size, file, i = 0;

	file = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (file == -1 || filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	while (*(text_content + 1))
	{
		i++;
	}
	size = write(file, text_content, i);

	if (size == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);

}
