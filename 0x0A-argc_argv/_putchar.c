#include <stdio.h>

#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print 
 *
 * Return: ! on success
 * On error, return -1 and erno is appropriately set
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
