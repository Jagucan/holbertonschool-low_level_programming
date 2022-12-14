#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @n: Is a number.
 * @a: Is a pointer.
 */

void reverse_array(int *a, int n)
{
	int i;
	int aux;

	for (i = 0; i < n / 2; i++)
	{
		aux = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = aux;
	}
}

