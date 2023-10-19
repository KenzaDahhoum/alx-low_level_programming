#include "main.h"
/**
  *_strncat - a function that concatenates two strings.
  *@dest: destination
  *@src: source
  *@n: number of the byte to be copied from src
  *Return:  pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);



}
