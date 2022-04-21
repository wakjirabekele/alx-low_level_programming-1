#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: the first string
 * @s2: the second string
 * Return: comparison
 */
int _strcmp(char *s1, char *s2)
{
	char *str_one = s1;
	char *str_two = s2;

	while(*str_one != '\0' && *str_two != '\0')
	{
		if(*str_one != *str_two)
		{
			break;
		}
		str_one++;
		str_two++;
	}

	return (*str_one - *str_two);
}
