#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of the file to read
 * @letters:  the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t readFile, writeFile;
	int fileDesc;
	char *buff;

	if (filename == NULL)
		return (0);

	fileDesc = open(filename, O_RDONLY);

	if (fileDesc == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		close(fileDesc);
		return (0);
	}

	readFile = read(fileDesc, buff, letters);

	close(fileDesc);

	if (readFile == -1)
	{
		free(buff);
		return (0);
	}

	writeFile = write(STDOUT_FILENO, buff, readFile);
	free(buff);

	if (readFile != writeFile)
		return (0);

	return (writeFile);
}
