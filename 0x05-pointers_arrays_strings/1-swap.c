#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first pointer variable to be swaped
 * @b: second pointer variable to be swaped
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
