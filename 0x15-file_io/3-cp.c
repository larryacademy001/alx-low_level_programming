#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @fromFile: 1st File.
 * @toFile: 2nd File.
 * @argv: arguments vector.
 * Return: no return.
 */

void error_file(int fromFile, int toFile, char *argv[])
{
	if (fromFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (toFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int fromFile, toFile, fileClose;
	ssize_t readFile, writeFile;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp fromFile toFile");
		exit(97);
	}

	fromFile = open(argv[1], O_RDONLY);
	toFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fromFile, toFile, argv);

	readFile = 1024;
	while (readFile == 1024)
	{
		readFile = read(fromFile, buffer, 1024);
		if (readFile == -1)
			error_file(-1, 0, argv);

		writeFile = write(toFile, buffer, readFile);
		if (writeFile == -1)
			error_file(0, -1, argv);
	}

	fileClose = close(fromFile);
	if (fileClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fromFile);
		exit(100);
	}
	fileClose = close(toFile);
	if (fileClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fromFile);
		exit(100);
	}
	return (0);
}
