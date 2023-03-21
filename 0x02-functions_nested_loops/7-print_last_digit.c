#include <stdio.h>

/**
 *Print_print last digit - function that prints last digit
 *@n: number to be target
 *
 *
 *Return: Always (0)
 *
 */
int print_last_digit(int n);
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit *= -1;
	_putchar (lastdigit + '0')
	return (lastdigit);
}
