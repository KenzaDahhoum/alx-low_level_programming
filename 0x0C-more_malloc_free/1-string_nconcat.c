#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*string_nconcat -  function that concatenates two strings
*@s1: first string
*@s2: second string to be contatenated
*@n: number of characters to concat
*Return: string concatenation function
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;

	unsigned int i = 0;

	char *string;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (len2 < n)
		n = len2;

	string = (char *)malloc(sizeof(char) * (len1 + n + 1));

	if (string == NULL)
		return (NULL);

	while (i < len1 + n)
	{
		if (i >= len1)
			string[i] = s2[i - len1];
		else
			string[i] = s1[i];
		i++;
	}

	string[i] = '\0';

	return (string);
}
