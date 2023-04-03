#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: Pointer to the first occurrence of the character c in the string s
 **/

char *_memcpy(char *dest, char src, usigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
