#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: the first string
 * @s2: the second string
 * Return: comparison
 */
int _strcmp(char *s1, char *s2)
{
	int flag ;

	flag = 0;
	while(*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
		return (*s1 - *s2);
}
