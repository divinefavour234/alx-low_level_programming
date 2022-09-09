#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print number base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
