#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDesc;
	int countLetters;
	int writeFile;

	if (!filename)
		return (-1);

	fileDesc = open(filename, O_WRONLY | O_APPEND);

	if (fileDesc == -1)
		return (-1);

	if (text_content)
	{
		for (countLetters = 0; text_content[countLetters]; countLetters++)
			;

		writeFile = write(fileDesc, text_content, countLetters);

		if (writeFile == -1)
			return (-1);
	}

	close(fileDesc);

	return (1);
}
