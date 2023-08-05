#include <stdio.h>

/**
 * main - function to print a number, followed by a new line
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
