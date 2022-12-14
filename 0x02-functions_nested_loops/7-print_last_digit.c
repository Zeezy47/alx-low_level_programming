#include "main.h"

/**
 * print_last_digit - command to print last digit
 * @n: the number
 * Return: value of the number
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)
		ld *= -1;

	_putchart(ld + '0');

	return (ld);
}
