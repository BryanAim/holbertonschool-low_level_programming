#include "holberton.h"
/**
 * not_close - prints error.
 * @fd: value to print.
 */

void not_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
	exit(100);
}


/**
 * cp - copy a file
 * @from: file to copy
 * @to: file to copy in
 */

void cp(const char *from, char *to)
{
	int file_r, file_w, r;
	char buff[1024];

	file_r = open(from, O_RDONLY);
	if (file_r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	file_w = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_w == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", to);
		exit(99);
	}
	r = read(file_r, buff, 1024);
	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	while (r != 0)
	{
		if (write(file_w, buff, r) == -1)
		{
			dprintf(2, "Error: Can't write to %s", to);
			exit(99);
		}
		r = read(file_r, buff, 1024);
		if (r == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", from);
			exit(98);
		}
	}
	if (close(file_w) == -1)
	not_close(file_r);
	if (close(file_r) == -1)
	not_close(file_w);
}
/**
 * main - copy a file into another
 * @argc: size
 * @argv: character.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
	}
	if (argv[1] == NULL)
	{
	dprintf(2, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	cp(argv[1], argv[2]);
	return (0);
}
