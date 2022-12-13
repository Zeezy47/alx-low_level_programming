#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Return: Always 0
 */

int main(void)
{
	int c;
	int d;

	for (c = 0; d <= 9; c++)
	{
		for (d = c + 1; d <= 9; d++)
		{
			putchar('0' + c);
			putchar('0' + d);
				if (c < 8)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
