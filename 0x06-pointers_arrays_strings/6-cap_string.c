#include "main.h"

/**
  *cap_string - function that capitalizes all words of a string
  *@str: string to be capitalized
  *Return: str
  */
char *cap_string(char *str)
{
	int i, j;

char spe[13] = {' ', '\t', '\n', ',', ';', '.'
	, '!', '?', '"', '(', ')', '{', '}'};

for (i = 0; str[i] != '\0'; i++)
{
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;

for (j = 0; j < 13; j++)
{
if (str[i] == spe[j])
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] -= 32;
}
}
}
}

return (str);
}
