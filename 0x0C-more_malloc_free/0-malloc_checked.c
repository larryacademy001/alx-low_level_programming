#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: bytes allocate
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(1);
	return (pointer);
}
