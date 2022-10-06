#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: parameter passed
 *
 * Return: 98 when the memory is null and return the pointer on success
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		Exit(98);
	return (ptr);
}
