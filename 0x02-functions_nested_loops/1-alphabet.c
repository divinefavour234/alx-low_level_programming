#include "main.h"

/**
 * print-alphabet - Entry for this program
 *
 * Description: print the lowerr case alphabets
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
