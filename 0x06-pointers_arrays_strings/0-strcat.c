#include "main.h"

/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0' && j < 97)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + j) = '\0';
	return (dest);
}
