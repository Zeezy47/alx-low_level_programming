#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Locate last digit around 6
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2, last_digit = n % 10;
	printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	if (last_digit == 0)
		printf("and is 0\n");
	else if (last_digit < 6)
		printf("and is less than 6 and not 0\n");
	else
		printf("and is greater than 5\n");
	return (0);
}
