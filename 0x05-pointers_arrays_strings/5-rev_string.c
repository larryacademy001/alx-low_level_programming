#include "main.h"

/**
 * rev_string - unction that prints a string, in reverse,
 * followed by a new line.
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{
	int strLength = 0;
	int start = 0;
	int end = 0;
	char tempStorage;

	while (s[strLength])
		strLength++;

	end = strLength - 1;

	while (start < end)
	{
		tempStorage = s[start];
		s[start] = s[end];
		s[end] = tempStorage;
		start++;
		end--;
	}
}
