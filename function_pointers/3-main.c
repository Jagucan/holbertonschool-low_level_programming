#include "3-calc.h"

/**
 * main - Performs simple operations.
 * @argc: Is the number of argument.
 * @argv: It an array.
 * Return: Return o;
*/

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;
	char *op = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
