#include <stdio.h>

/**
 * swap_int - Function that swaps values of two integers
 *
 * @a: value of first integer
 * @b: value of second integer
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;

}
