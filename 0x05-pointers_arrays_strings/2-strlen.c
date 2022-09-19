#include "main.h"

/**
 * _strlen - count the lenght of a strength
 * @s: The parameter needed by the function
 * Return: return the length of the string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;
	return (length);
}
