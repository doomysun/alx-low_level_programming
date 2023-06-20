#include "main.h"
/**
* print_alphabet - prints the alphabet
* Description: will print the alphabet in lowercase
*/
void print_alphabet(void)
{
	int d = 97;

	for (; d <= 122; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
