#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two string
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2 that should be concatenated
 *
 * Return: NULl if s1 or s2 is null, return pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1lng = 0;
	unsigned int s2lng = 0;
	int j = 0;
	unsigned int i = 0;
	unsigned int strlng;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	while (s1[s1lng] != '\0')
		s1lng++;
	while (s2[s2lng] != '\0')
		s2lng++;
	if (n >= s2lng)
		strlng = s1lng + s2lng;
	else
		strlng = s1lng + n;
	ptr = malloc((sizeof(char)) * strlng + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < s1lng)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s1lng < strlng)
	{
		ptr[s1lng] = s2[j];
		j++;
		s1lng++;
	}
	ptr[strlng+1] = '\0';
	return (ptr);
}
