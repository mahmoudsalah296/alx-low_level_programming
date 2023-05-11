#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define BUFF 1024
/**
 * main - entry point
 * @argc: number of arguments passed to main
 * @argv: array of arguments
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int fd1, fd2, nbytes, c;
	char buffer[BUFF];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*open file 1 to copy from*/
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd1);
		exit(98);
	}
	/*open file two to copy into*/
	fd2 = open(argv[2], O_TRUNC | O_WRONLY | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd1);
		close(fd2);
		exit(98);
	}
	while ((nbytes = read(fd1, buffer, BUFF)) > 0)
	{
		write(fd2, buffer, nbytes);
	}
	c = close(fd1);
	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	c = close(fd2);
	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
