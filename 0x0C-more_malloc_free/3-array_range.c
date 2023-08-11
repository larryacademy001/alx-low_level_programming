#include "main.h"

/**
 * myarrayay_range - function that creates an myarrayay of integers.
 * @min: minimum number
 * @max: maximum number
 * Return: array
 */
int *myarrayay_range(int min, int max)
{
	int *myarray, i = 0, t = min;

	if (min > max)
		return (0);
	myarray = malloc((max - min + 1) * sizeof(int));

	if (!myarray)
		return (0);
	while (i <= max - min)
		myarray[i++] = t++;
	return (myarray);
}
