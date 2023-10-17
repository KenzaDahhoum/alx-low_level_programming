#include "main.h"
/**
 * _strcpy - Function
 * @dest: Destination
 * @src: Source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
