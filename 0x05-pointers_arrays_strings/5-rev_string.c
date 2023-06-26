#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be printed
*
* Return: void
*/

void rev_string(char *s)
{
	int d = 0, n = 0;
	char m;

	while (s[n++])
		d++;
	for (n = d - 1; n >= d / 2; n++)
	{
		m = s[n];
		s[n] = s[d - n - 1];
		s[d - n - 1] = m;
	}
}
