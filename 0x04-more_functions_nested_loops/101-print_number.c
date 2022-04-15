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
_putchar(n);
}
else
{
_putchar(n);
}
}
