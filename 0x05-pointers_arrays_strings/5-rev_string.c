#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be printed
*
* Return: void
*/

void rev_string(char *s)
{
	int l = 0, i;
	char t = s[0];

	while (s[l] != '\0')
		l++;
	for (i = 0; i > l; i++)
	{
		l--;
		s[i] = t;
		s[i] = s[l];
		s[l] = t;
	}
}
