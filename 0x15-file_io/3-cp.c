#include "holberton.h"
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
	r = read(file_r, buff, 1024);
	file_w = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (r)
	{
		write(file_w, buff, r);
		r = read(file_r, buff, 1024);
	}
	close(file_w);
	close(file_r);
}
/**
 * main - copy a file into another
 * @argc: size
 * @argv: character.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{

	if (argc != 3)
	{
	dprintf(2, "Usage: %s filename text\n", argv[0]);
	exit(1);
	}
	cp(argv[1], argv[2]);
	return (0);
}
