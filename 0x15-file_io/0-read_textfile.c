#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file, prints the standard output.
 * @filename: file bring read
 * @letters: nummbers of letters
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a;
	ssize_t b;
	ssize_t nf;
	char *bff;

	nf = open(filename, O_RDONLY);
	if (nf == -1)
		return (0);
	bff = malloc(sizeof(char) * letters);
	b = read(nf, bff, letters);
	a = write(STDOUT_FILENO, bff, b);

	free(bff);
	close(nf);
	return (a);
}
