#include "main.h"

/**
 * print_binary - prints binary number
 * @n: uint t be converted to binary
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	long int bi_num = n;
	int i;
	int j; 
	int k = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		bi_num = n >> i;
		j = (bi_num) & 1;
		if (j || k)
		{
			if (j)
				_putchar('1');
			else
				_putchar('0');
			k = 1;
		}

	}
}
