#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to stdout
 * @filename: the file text is to be read from.
 * @letters: the number of letters it should and print.
 * Return: return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesWritten, bytesRead;
	int fileDescriptor;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
	{
		free(buffer);
		return (0);
	}

	bytesRead = read(fileDescriptor, buffer, letters);
	if (bytesRead == -1)
	{
		close(fileDescriptor);
		free(buffer);
		return (0);
	}

	close(fileDescriptor);

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);

	return (bytesWritten);
}
