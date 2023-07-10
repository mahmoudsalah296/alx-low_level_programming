#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on succes, 0 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nwrite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		if (access(filename, F_OK | W_OK) != 0)
			return (-1);
		else
			return (1);
	}
	nwrite = write(fd, text_content, strlen(text_content));
	if (nwrite == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
