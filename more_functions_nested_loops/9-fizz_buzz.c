#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100.
 * Return: 0 every time.
 */

int main(void)
{

	int num;

	for (num = 1; num <= 99; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)

			printf("FizzBuzz ");

		else if (num % 3 == 0)

			printf("Fizz ");

		else if (num % 5 == 0)

			printf("Buzz ");

		else
			printf("%i ", num);
	}

	printf("Buzz\n");
	return (0);
}
