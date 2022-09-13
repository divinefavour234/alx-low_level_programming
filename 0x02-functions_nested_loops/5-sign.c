#include "main.h"

/**
 * print_sign - Entry point of program
 *
 * Description: Print the sign of a number
 *
 * Return: return (1) and print + if n is greater than 0
 * return (0) and print - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
