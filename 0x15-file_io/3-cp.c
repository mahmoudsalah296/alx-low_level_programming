#include "main.h"
/**
 * exit_97- check if argc is 3
 * @argc: argc count
*/
void exit_97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * exit_98 - check if we can read from a file
 * @fd: file descriptor
 * @nread: bytes read from the file
 * @argv: argv
*/
void exit_98(int fd, ssize_t nread, char **argv)
{
	if (fd == -1 || nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}
/**
 * exit_99 - check if we can write to a file
 * @fd: file descriptor
 * @nwrite: bytes written to the file
 * @argv: argv
*/
void exit_99(int fd, ssize_t nwrite, char **argv)
{
	if (fd == -1 || nwrite == -1 || access(argv[2], W_OK) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * safe_close - safely close a file
 * @fd: file descriptor
*/
void safe_close(int fd)
{
	int n = close(fd);

	if (n != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - entry point
 * @argc: number of arguments passed to the main
 * @argv: array of strings contain arguments values
 * Return: 0 on success
*/
int main(int argc, char **argv)
{
	int fd1, fd2;
	ssize_t nread, nwrite;
	char buffer[BUFFER];

	exit_97(argc);
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	while ((nread = read(fd1, &buffer, BUFFER)) > 0)
	{
		nwrite = write(fd2, buffer, nread);
		exit_98(fd1, nread, argv);
		exit_99(fd2, nwrite, argv);
	}
	safe_close(fd1);
	safe_close(fd2);
	return (0);
}
