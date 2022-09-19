#include "main.h"

/**
 * reset_to_98 - reset the value  takes a pointer to an int as
 * parameter and updates the value it points to to 98
 * @n: parameter needed to be passed to the function
 */

void reset_to_98(int *n)
{
	/*change the value at the address of n*/
	*n = 98;
}
