#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet 10 times
* Description: prints the alphabet in lowercase 10 times
*/
void print_alphabet_x10(void)
{
	int d = 0, e;

	while (d < 10)
	{
		for (e = 97; e <= 122; e++)
			_putchar(e);
		_putchar('\n');
		d++;
	}
}
