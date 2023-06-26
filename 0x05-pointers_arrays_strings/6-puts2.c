#include "main.h"

/**
* puts2 - prints every other character of a string,
* starting with the first character, followed by a new line
* @str: string to be printed
*
* Return: void
*/

void puts2(char *str)
{
	int d, m = 0;

	while (str[m] != '\0')
		m++;
	for (d = 0; d < m; d = d + 2)
		_putchar(str[d]);
	_putchar('\n');
}
