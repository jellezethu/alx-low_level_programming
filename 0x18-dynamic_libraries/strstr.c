#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the main string
 * @needle: the substring
 * Return: where the substring is in the main string or 0
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;


		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}


		if (*p == '\0')
			return (haystack);
	}


	return (0);
}
