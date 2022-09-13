#include "main.h"

/**
 * int _isalpha - Entry of the function
 *
 * Description: Check for Alphabetic Characters
 *
 * Return: return (1) if alphabet else return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
