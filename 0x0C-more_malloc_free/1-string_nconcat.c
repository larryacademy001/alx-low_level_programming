#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
	n = size2;
	pointer = malloc((size1 + n + 1) * sizeof(char));

	if (pointer == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		pointer[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		pointer[i] = s2[i - size1];
	}
	pointer[i] = '\0';

return (pointer);
}
