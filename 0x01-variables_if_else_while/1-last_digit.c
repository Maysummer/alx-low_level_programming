#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Beginning of the function in betty style and documentation
 *
 * Return: End of function
 */
int main(void)
{
	int n, lastDigit;

	lastDigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", lastDigit, n)
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", lastDigit, n)
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", lastDigit, n)
	return (0);
}
