#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *file);
void close_file(int fileDesc);

/**
 * create_buff - Allocates 1024 bytes for a buff.
 * @file: The name of the file buff is storing chars for.
 * Return: A pointer to the newly-allocated buff.
 */
char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Closes file descriptors.
 * @fileDesc: The file descriptor to be closed.
 */

void close_file(int fileDesc)
{
	int fileClose;

	fileClose = close(fileDesc);

	if (fileClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fileDesc %d\n", fileDesc);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int fileFrom, fileTo, readFile, writeFile;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	fileFrom = open(argv[1], O_RDONLY);
	r = read(fileFrom, buff, 1024);
	fileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fileFrom == -1 || readFile == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		writeFile = write(fileTo, buff, readFile);
		if (fileTo == -1 || writeFile == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		readFile = read(fileFrom, buff, 1024);
		fileTo = open(argv[2], O_WRONLY | O_APPEND);

	} while (readFile > 0);

	free(buff);
	close_file(fileFrom);
	close_file(fileTo);

	return (0);
}

