#include "main.h"
/**
 * cap_string - capitalize each word
 * @str: the parameter in the form of input
 * Return: character to be returned
 */

char *cap_string(char *str)
{

	int i;

	for (i = 0; str[i]; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else if (str[i-1] == ' ')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}

	return (str);
}
