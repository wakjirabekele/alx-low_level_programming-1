#include "main.h"
/**
 * _strncat - concatenate two string
 * @dest: destination
 * @src: source pointer
 * @n: value
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
{
	i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
