#include "main.h"

/**
 * print_alphabet_x10 - Entry of this program
 *
 * Description: Print alphabets ten times
 */

void print_alphabet_x10(void)
{
	char alphabet;

	int count = 0;

	while( count < 10 )
	{
		for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		count++;
		_putchar('\n');
	}

}
