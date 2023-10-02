
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and then print to STDOUT.
 * @filename: text file read
 * @letters: number of letters to read
 * Return: w- number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fileD;
	ssize_t x;
	ssize_t y;

	fileD = open(filename, O_RDONLY);
	if (fileD == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	y = read(fileD, buff, letters);
	x = write(STDOUT_FILENO, buff, y);

	free(buff);
	close(fileD);
	return (x);
}


