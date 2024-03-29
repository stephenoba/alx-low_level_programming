#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: text content for file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wc = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IWUSR | S_IRUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[wc] != '\0')
			wc++;

		wc = write(fd, text_content, wc);
		if (wc == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
