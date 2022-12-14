#include "main.h"

/**
 * print_sign - print number sign
 * @n: number to be checked
 * Return: 1 and print + if n is greater than zero
 * print 0 if n is greater than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
