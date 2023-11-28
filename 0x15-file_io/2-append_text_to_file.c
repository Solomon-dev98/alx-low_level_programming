#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the text to be appended.
 * Return: 0 on success or -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (-1);
	}
	fileDescriptor = open(filename, O_WRONLY | O_APPEND,  0600);
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
