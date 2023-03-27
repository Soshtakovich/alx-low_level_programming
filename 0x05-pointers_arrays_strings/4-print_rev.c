#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int lenstr = 0, index;

	while (s[index++])
		lenstr++;

	for (index = lenstr - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
