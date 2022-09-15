#include <stdio.h>


/**
 * main - Entry of code to print number from 0 - 100 with some customization
 *
 * Return: return Always (0) sucess
 */
int main(void)
{
	int num = 1;
	char FZ[] = "FizzBuzz";
	char F[] = "Fizz";
	char Z[] = "Buzz";

	while (num < 101)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("%s", FZ);
		}
		else if (num % 3 == 0)
		{
			printf("%s", F);
		}
		else if (num % 5 == 0)
		{
			printf("%s", Z);
		}
		else
		{
			printf("%d", num);
		}

		if (num != 100)
			printf(" ");
		num++;
	}

	printf("\n");
	return (0);
}
