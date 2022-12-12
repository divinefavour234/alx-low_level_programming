#include "main.h"

/**
 * _isupper - Start of fuction
 *
 * Description: Check for uppercase character
 * @c: A parameter integer that is needed
 * Return: 1, or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
