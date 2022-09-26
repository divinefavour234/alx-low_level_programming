#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory
 * @s: An array of characters
 * @b: a character to be replac the array of characters
 * @n: number of bytes of the memory
 * Return: Return the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
