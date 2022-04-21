#include "main.h"
/**
 * string_toupper - conver the string to upper
 * @str: string
 * Return: return the character
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
