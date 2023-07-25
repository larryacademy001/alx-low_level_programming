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

	while (s[strLength])
		strLength++;

	int start = 0;
	int end = strLength - 1;

	while (start < end)
	{
		tempStorage = str[start];
		str[start] = str[end];
		str[end] = tempStorage;
		start++;
		end--;
	}
}
