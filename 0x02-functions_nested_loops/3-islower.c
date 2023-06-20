#include "main.h"
/**
*main - start of the program
*Description: will check if the character is lowercase
*Return: value 1 is lowercase and 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
