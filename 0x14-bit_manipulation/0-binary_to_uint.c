#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int un_int;
	int i;
	int Baiz_2;

	if (!b)
		return (0);

	un_int = 0;

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, Baiz_2 = 1; i >= 0; i--, Baiz_2 *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] & 1)
		{
			un_int += Baiz_2;
		}
	}

	return (un_int);
}
