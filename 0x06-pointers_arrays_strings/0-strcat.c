#include "main.h"
/**
  *_strcat - function that concatenates two strings.
  *@dest: destination string
  *@src: source string
  *Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int c1, c2;

	c1 = 0;
	while (dest[c1] != '\0')
	{
		c1++;
	}
	for (c2 = 0; src[c2] != '\0'; c2++)
	{
		dest[c1] = src[c2];
		c1++;
	}
	return (dest);
}
