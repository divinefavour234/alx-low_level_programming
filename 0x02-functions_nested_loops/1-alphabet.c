#include "main.h"

/**
 * print-alphabet - print alphabet in lower case
 *
 */

void print_alphabet(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
