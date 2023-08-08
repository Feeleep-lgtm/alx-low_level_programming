#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *x;
	ssize_t y;
	ssize_t a;
	ssize_t b;

	y = open(filename, O_RDONLY);
	if (y == -1)
		return (0);
	x = malloc(sizeof(char) * letters);
	b = read(y, x, letters);
	a = write(STDOUT_FILENO, x, b);

	free(x);
	close(y);
	return (a);
}
