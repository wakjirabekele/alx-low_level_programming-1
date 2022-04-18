#include "main.h"
/**
 * swap_int - function to swap content
 * @a: first parameter
 * @b: second parameter
 * Return: void method
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
