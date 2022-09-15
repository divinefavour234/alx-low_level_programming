#include "main.h"

/**
 * _isupper - Start of fuction
 *
 * Description: Check for uppercase character
 *
 * Return: return (1) if c is upper case, otherwise return (0)
 *
 * @c: A parameter integer that is needed
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
