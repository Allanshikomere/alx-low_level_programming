#include "main.h"
#include <stdlib.h>

/*
 * read_textfile- Prints the text file to STDOUT after reading it
 * @filename: Being read from a text file
 * @letters: Amount of letters to be read
 * Return: The number of bytes that were actually read and printed is w
 *         When the function fails or the filename is NULL, 0 is returned.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
