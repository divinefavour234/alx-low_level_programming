#include "main.h"

/**
 * _puts - Prints the a string
 * @str: The pointer to the array of character to be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
