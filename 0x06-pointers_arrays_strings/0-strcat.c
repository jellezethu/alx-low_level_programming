#include <stdio.h>
#include <string.h>

/**
 * _strcat - Concatenates(put together) the string pointed to by @src,
 *          to the end of the string pointed to by @dest.+ terminating null byt
 *          at the end
 * main - function that concatenates two strings
 * @src: input source
 * @dest: output dource for dest
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
