#include "main.h"

/**
 * append_text_to_file - appends a file
 * @filename: file name
 * @text_content: text content for file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wc = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
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
