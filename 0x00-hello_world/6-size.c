#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int i;
	long l;
	long int li;
	long long int lli;
	float f;

	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of long:  %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of float:  %lu byte(s).\n", (unsigned long)sizeof(f));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	return (0);
}
