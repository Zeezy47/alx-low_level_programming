#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int leni = 0;
	int o;

	while (*s != '\0')
	{
		leni++;
		s++;
	}
	s--;
	for (o = leni; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
