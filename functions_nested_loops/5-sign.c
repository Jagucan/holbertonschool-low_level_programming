#include "main.h"

/**
 * print_sign - Print the singn of a number.
 * @n: is an caracter.
 * Return: 1 if n is greather than 0, 0 if n is 0, -1 if n less than 0.
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
