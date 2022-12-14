#include "main.h"

/**
 * print_diagonal - Draws a line diagonally on the terminal
 *
 * @n: Numbers of time that that it should print the line
 */

void print_diagonal(int n)
{
	int i;
	int spaces;

	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i; spaces++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
