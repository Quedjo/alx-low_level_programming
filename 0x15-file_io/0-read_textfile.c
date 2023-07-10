#include "main.h"

/**
 * read_textfile - read a certain size and prints to std output
 * @filename: file to read from
 * @letters: size to read
 * Return: actual size read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int descripter; 
	descripter = open(filename, O_RDONLY);
	if (descripter == -1)
		return (0);

	
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	
	reader = read(descripter, buff, letters);
	if (reader == -1)
	{
		free(buff);
		close(descripter);
		return (0);
	}

	
	writer = write(STDOUT_FILENO, buff, reader);
	if (writer == -1)
	{
		free(buff);
		close(descripter);
		return (0);
	}

	close(descripter);
	return (reader);

}

