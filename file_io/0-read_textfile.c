#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: Is a file name.
 * @letters: Is a number of letter on the text.
 * Return: Returns the actual number of letters it could read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
		ssize_t o, r, w;
		char *text;

	if (!filename)
		return (0);

	text = malloc(letters);
	if (!text)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, text, letters);
	w = write(STDOUT_FILENO, text, r);

	if (o == -1 || r == -1 || w == -1)
	{
		free(text);
		return (0);
	}

	free(text);
	close(o);
	return (w);
}
