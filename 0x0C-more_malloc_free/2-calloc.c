#include "main.h"

/**
 * _memset - function to copointery char b
 * @s: string
 * @b: inpointerut
 * @n: bytes
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);
	_memset(pointer, 0, (nmemb * size));
	return (pointer);
}
