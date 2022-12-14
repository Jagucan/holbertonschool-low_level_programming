#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Is a pointer.
 * @src: Is another pointer.
 * @n: Bytes from src.
 * Return: Return a pointer dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int i = 0;


	while (dest[a] != '\0')
		a++;

	while (src[i] != '\0' && i < n)
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (dest);
}
