#include "main.h"

/**
 * _strlen -i returns the value of a string
 * @s: - string whos length to return
 * Return: the value of the string
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
