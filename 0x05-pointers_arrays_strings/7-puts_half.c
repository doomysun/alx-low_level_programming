#include "main.h"

/**
* puts_half - prints half of a string, followed by a new line
* @str: string to be manipulated
*
* Return: void
*/

void puts_half(char *str)
{
	int d, n = 0;

	while (str[n] != '\0')
		n++;
	if (n % 2 == 1)
	{
		d = (n - 1) / 2;
		d = d + 1;
	}
	else
	{
		d = n / 2;
	}
	for (; d < n; d++)
		_putchar(str[d]);
	_putchar('\n');

}
