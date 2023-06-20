#include "main.h"
/**
  *main - start of the program
  *Description: will print the alphabet in lowercase
  *Return: value 0 is success
  */
void print_alphabet(void)
{
	int d = 97;

	while (d <= 122)
	{
		_putchar(d);
		d++;
	}
	_putchar('\n');
}
