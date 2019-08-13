#include "holberton.h"
/**
* read_textfile - read a text file
* @filename: name of a text file
* @letters: size
* Return: the actual number of letters it could read and print
* On error, 0 is returned.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, letters2 = 0;
	char *buff;

	file = open(filename, O_RDONLY);
	if (file == -1)
		exit(0);
	buff = malloc(letters + 1);
	if (buff == '\0')
	{
		return (0);
	}
	letters2 =  read(file, buff, letters);
	buff[letters] = '\0';
	write(STDOUT_FILENO, buff, letters2);

	close(file);
	return (letters2);
}
