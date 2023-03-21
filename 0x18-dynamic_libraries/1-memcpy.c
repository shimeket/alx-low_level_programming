#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: memory area where copied at
 * @src: memory area where copied from
 * @n: no. of bytes
 * Return: copied memory with n bytes changed
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
