#include "holberton.h"

/**
 * read_textfile - reads text file and writes to standard out
 * @filename: file to be read
 * @letters: amount of letters
 *
 * Return: amount of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int Rcount;
	int Pcount;
	int fd;
	void *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	Rcount = read(fd, (char *)buff, letters);
	if (Rcount == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	Pcount = write(STDOUT_FILENO, (char *)buff, Rcount);
	if (Pcount == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	if (close(fd) == -1)
		return (0);
	free(buff);
	return (Pcount);
}
