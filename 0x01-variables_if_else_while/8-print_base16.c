#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
int x;
char x;

for (x = 0; x <= 9; x++)
printf("%i", x);
for (x = 'a'; x <= 'f'; ++x)
putchar(x);

putchar('\n');

return (0);
}
