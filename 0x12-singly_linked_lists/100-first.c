#include <stdio.h>

void printstr(void)__attribute__((constructor));

/**
 * printstr - function that prints a string before the main
 * function is executed
 */

void printstr(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
