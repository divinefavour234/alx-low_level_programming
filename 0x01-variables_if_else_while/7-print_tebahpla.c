#include <stdio.h>

/**
 * main - Entry point of Code
 *
 * Description: Print lower case alphabeth in reverse
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int i;

	i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}

	putchar (10);

	return (0);
}
