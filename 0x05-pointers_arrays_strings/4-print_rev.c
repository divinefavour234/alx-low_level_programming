#include "main.h"

/**
 * print_rev - Print a string in reverse
 *
 * @s: The parameter needed to pass to the function
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
