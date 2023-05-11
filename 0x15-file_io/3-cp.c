#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define BUFF 1024

void close_flie(int fd);
/**
 * main - entry point
 * @argc: number of arguments passed to main
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, nbytes;
	char buffer[BUFF];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*open file 1 to copy from*/
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close_flie(fd1);
		exit(98);
	}
	/*open file two to copy into*/
	fd2 = open(argv[2], O_TRUNC | O_WRONLY | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close_flie(fd2);
		exit(99);
	}
	while ((nbytes = read(fd1, buffer, BUFF)) > 0)
	{
		write(fd2, buffer, nbytes);
	}
	close_flie(fd1);
	close_flie(fd2);
	return (0);
}

/**
 * close_flie - closes a file and check if it is closed successfully
 * @fd: file descriptor of file to be closed
*/
void close_flie(int fd)
{
	int c;

	c = close(fd);
	if (c < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
