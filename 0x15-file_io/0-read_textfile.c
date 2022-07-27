#include "main.h"

/**
 * read_textfile - prints the content of a file to stdout
 * @filename: full name of file
 * @letters: number of letters to be read and printed
 * Return: actual number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_wc, write_wc;
	int fd;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	read_wc = read(fd, buffer, letters);
	if (read_wc == -1)
		return (0);

	write_wc = write(STDOUT_FILENO, buf, read_wc);
	if (write_wc == -1 || read_wc != write_wc)
		return (0);

	free(buf);
	close(fd);
	return (write_wc);
}
