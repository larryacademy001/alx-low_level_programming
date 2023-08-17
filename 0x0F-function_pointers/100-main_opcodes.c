#include "function_pointers.h"

/**
 *main - a program that prints the opcodes of its own main function.
 *@argc: integer value.
 *@argv: character value.
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int counter;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (counter = 0; counter < atoi(argv[1]) - 1; counter++)
		printf("%02hhx ", ((char *)main)[counter]);
	printf("%02hhx\n", ((char *)main)[counter]);
	return (0);
}
