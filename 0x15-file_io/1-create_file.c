#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of the file.
 * @text_content: the content to be written.
 * Return: 1 on success or -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fileDescriptor;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (-1);
	}

	fileDescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileDescriptor == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytesWritten = write(fileDescriptor, text_content, strlen(text_content));
		if (bytesWritten == -1)
		{
			close(fileDescriptor);
			return (-1);
		}
	}

	close(fileDescriptor);

	return (1);
}
