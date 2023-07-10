#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file that will be created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on succes, 0 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nwrite;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		exit(1);
	}
	nwrite = write(fd, text_content, strlen(text_content));
	if (nwrite == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
