#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @A: first integer
 * @B: second integer
 * @C: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
		{
			largest = a;
		}
	else if (b > c)
		{
			largest = b;
		}
	else
		{
			largest = c;
		}
	return (largest);
}
