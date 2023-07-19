#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: omputes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded), followed by a new line.
 * Return: 0
 */

int main(void)
{
	int counter = 0;
	int sum = 0;

	while (counter < 1024)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
		{
			sum += counter;
		}

		counter++;
	}

	printf("%i\n", sum);
	return (0);
}
