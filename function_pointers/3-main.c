#include "3-calc.h"

/**
 * Performs simple operations.
 * @argc: Is the number of argument.
 * @argv: It an array.
 * Return: Return o;
*/

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error2\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (op == NULL)
	{
		printf("Error1\n");
		exit(99);
	}

	result = op(num1, num2);
	printf("%d\n", result);
	return (0);
}
