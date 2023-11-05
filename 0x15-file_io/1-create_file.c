#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: the name of the file
 * @text_content: the content writen
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, nl, r;

	if (!filename)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nl = 0; text_content[nl]; nl++)
		r = write(f, text_content, nl);
	if (r == -1)
		return (-1);
	close(f);
	return (1);
}
