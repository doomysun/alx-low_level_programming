#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be printed
*
* Return: void
*/

void rev_string(char *s)
{
	int l, d, i;
	char t;

	for (l = 0; s[l] != '\0'; l++)
		{
			;
			d = 0;
			i = l / 2;
		}
	while (i--)
	{
		t = s[l - d - 1];
		s[l - d - 1] = s[d];
		s[d] = t;
		d++;
	}
}
