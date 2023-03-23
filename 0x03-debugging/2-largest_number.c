#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @A: first integer
 * @B: second integer
 * @C: third integer
 * Return: largest number
 */

int main(void)
{
    int A, B, C;

	printf("enter the number A, B and C: ");
	scanf("%d, %d, %d", &A, &B, &C);

	if (A >= B && A >= C)
		printf("%d is the largest number.", A);
	if (B >= A && B >= C)
		printf("%d is the largest number.", B);
	if (C >= A && C >= B)
		printf("%d is the largest number.", C);

	return (0);
}
