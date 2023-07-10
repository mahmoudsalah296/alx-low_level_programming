#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file that will be read from
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 *			or 0 if: the file can not be opened or read
 *					filename is NULL
 *					write fails or does not write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char buffer[BUFF_SIZE];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		close(fd);
		return (0);
	}
	nwrite = write(STDOUT_FILENO, buffer, nread);
	if (nwrite == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (nwrite);
}
