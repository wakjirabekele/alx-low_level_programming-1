#include "main.h"

/**
 * _memset - fill memory with constant 
 * @s: area to fill
 * @b: constant to fill
 * @n: byte of memory
 *
 * Return: the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
