#include "main.h"

/**
  *leet -  function that encodes a string into 1337.
  *a and A should be replaced by 4
  *e and E should be replaced by 3
  *o and O should be replaced by 0
  *t and T should be replaced by 7
  *l and L should be replaced by 1
  *@str: string
  *Return: str
  */
char *leet(char *str)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
		}
	}
	return (str);
}
