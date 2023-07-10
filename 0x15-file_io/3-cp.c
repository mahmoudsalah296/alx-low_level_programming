#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments passed to the main
 * @argv: array of strings contain arguments values
 * Return: 0 on success
*/
int main(int argc, char **argv)
{
	int fd1, fd2, closevalue;
	ssize_t nread, nwrite;
	char buffer[BUFFER + 1];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);

	do {
		nread = read(fd1, buffer, BUFFER);
		if (nread == -1 || fd1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		nwrite = write(fd2, buffer, nread);
		if (nwrite == -1 || fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
			exit(99);
		}
	} while (nread);
	closevalue = close(fd1);
	if (closevalue != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	closevalue = close(fd2);
	if (closevalue != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
