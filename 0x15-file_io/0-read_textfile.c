#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile -  reads a text file and prints it to the standard output.
 * @letters: the number of letters it should read and print
 * @filename: pointer to file name
 * Return: 0 if filename is NULL
 *			0 if write fails or does not write the expected amount of bytes.
 *			0 if the file can not be opened or read
 *			otherwise return actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n, bytes = 0;
	char buff[10];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while (((n = read(fd, buff, 1)) > 0) && letters > 0)
	{
		write(STDOUT_FILENO, buff, n);
		letters--;
		bytes++;
	}
	close(fd);
	return (bytes);
}
