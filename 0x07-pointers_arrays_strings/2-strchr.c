#include "main.h"
/**
 * _strchr - locates a characters string
 *
 * @s: string of name (s) to be searched
 *
 * @c: the character to be checked
 *
 * Return: return the pointer to the first
 * occurence of s and return null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
