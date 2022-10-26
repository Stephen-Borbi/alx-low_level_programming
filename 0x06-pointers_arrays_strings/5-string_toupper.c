#include "main.h"

/**
 * string_toupper -changes all lowercase letters to uppercase
 * @s: string to change
 *
 * Return: address of s 
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s+1))
	{
		if (*(s+1) >= 'a' && * (s+1) <= 'z')
			*(s+i) -= 'a' - 'A'
		i++;
	}	
	return (s);
}	
