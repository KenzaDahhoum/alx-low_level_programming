#include "main.h"

/**
 *_memcpy -  function that copies memory area.
 *@dest: Pointer to destination memory area
 *@src: Pointer to source memory area
 *@n: Number of bytes to copy
 *Return:  pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
