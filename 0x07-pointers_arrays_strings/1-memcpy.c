#include "main.h"
/**
 *_memcpy - a function that copies memory are
 *@dest: memoery where is stored
 *@src: mmemory whee is coppied
 *@n: number of bytes
 *
 * Return:copied number with number of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
