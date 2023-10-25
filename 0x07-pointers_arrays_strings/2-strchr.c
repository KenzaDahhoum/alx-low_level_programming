#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *@s: string
 *@c: character that we need to find
 *Return: starting pointer
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (s);
}
