#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *string_nconcat -  concatenates two strings
 * @s1: character
 * @s2: character
 * @n: length
 * Return: cstr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p1 = s1, *p2 = s2;
	unsigned int L1 = 0, L2 = 0, c = 0;
	char *cstr, *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*p1 != 0)
		p1++, L1++;

	while (*p2 != 0)
		p2++, L2++;

	if (n >= L2)
		cstr = malloc((L1 + L2 + 1) * sizeof(char));
	p1 = s1, p2 = s2, dest = cstr;
	if (cstr == NULL)
		return (NULL);

	while (*p1 != '\0')
	{
		*dest = *p1;
		dest++;
		p1++;
	}
	while (*p2 != '\0' && c < n)
	{
		*dest = *p2;
		dest++;
		p2++;
		c++;
	}
	*dest = '\0';

	return (cstr);
}
