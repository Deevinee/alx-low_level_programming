#include "maim.h"

/**
 * print_numbers - print num from 0 - 9
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
