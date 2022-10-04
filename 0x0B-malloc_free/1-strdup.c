#include "main.h"

/**
 * _strdup - Copy a string given as a parameter
 *
 * @str: string to be enter
 *
 * Return: NULL  if the parameter is NULL if memory
 * is not allocated. else return the a pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	int count = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[count] != 0)
	{
		count++;
	}
	ptr = malloc((sizeof(char) * count) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
