#include "main.h"
/**
 * print_numbers - function that prints the numbers from 0 t0 9
 *
 * Return:0-9 folowed by a new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; 1 <= 9; i++)
	{
		_putchar(i + '0');
		_putchar('\n');
	}
}
