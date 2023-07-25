/**
 * _strlen - returns the length of a string.
 *
 * @s: pointer to the string value we want to check
 *
 * Return: length of string as int
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
