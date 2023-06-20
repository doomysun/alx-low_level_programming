#include "main.h"
/**
*main - start of the program
*Description: will print the alphabet in lowercase 10 times
*Return: value 0 is success
*/
void print_alphabet_x10(void)
{
	int d = 1, e = 97;

	while (d <= 10)
	{
		while (e <= 122)
		{
			_putchar(e);
			e++;
		}
		_putchar('\n');
		d++;
	}
}
