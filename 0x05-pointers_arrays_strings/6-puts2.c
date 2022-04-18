#include "main.h"
/**
* puts2 - print every character
* @str: a pointer
* Return: void method
*/
void puts2(char *str)
{
int a;

for (a = 0; str[a] != '\n'; a++)
{
if (a % 2 == 0)
_putchar (str[a]);
}

_putchar ('\n');
}
