#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file - a function that creates a file
 * @filename: the name of the file to be created
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	else
	{
		write(fd, text_content, strlen(text_content));
	}
	close(fd);
	return (1);
}
