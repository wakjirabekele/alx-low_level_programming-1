#include "main.h"
#include <stdio.h>
/**
 * print_number - print function
 * @n: input variable
 *
 * Return: always 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}
	if (m / 10 != 0)
	print_number(m / 10);
	_putchar((m % 10) + '0');
}
