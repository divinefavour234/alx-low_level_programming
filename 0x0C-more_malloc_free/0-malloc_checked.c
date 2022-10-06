#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: parameter passed
 *
 * Return: 98 when the memory is null and return the pointer on success
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
