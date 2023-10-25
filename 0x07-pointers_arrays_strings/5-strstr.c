#include "main.h"
/**
 *_strstr - function finds the first occurrence of the substring
 * @haystack: the stack
 * @needle: the needle
 * Return: pointer to the beginning of the located substring,
 *or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *h = haystack;
	char *n = needle;

	while (*h == *n && *h != '\0')
	{
		h++;
		n++;
	}
	if (*n == '\0')
		return (haystack);
	}
	return (0);
}
