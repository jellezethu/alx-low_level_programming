#include "main.h"

/**
 * _abs -  prints absolute value of a number
 * @i: number targeted
 *
 * Return: Always (0)
 */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}
