#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - determine if number is positive or negative
 *
 * Description: Program will assign a random number to a variable each time
 * it is executed.
 *
 * Return: always 0 (sucess)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

	else
		printf("%d is positive\n", n);
	return (0);
}
