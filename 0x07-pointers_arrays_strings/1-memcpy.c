#include "main.h"

/**
 * _memcpy - copies one memory address to another
 * @dest: destination memory address
 * @src: source memory address
 * @n: number of bytes to copy from the memory area
 *
 * Return: return a pointer to the destination address
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (dest == NULL)
			return (NULL);
		 dest[i] = src[i];
	}
	return (dest);
}
