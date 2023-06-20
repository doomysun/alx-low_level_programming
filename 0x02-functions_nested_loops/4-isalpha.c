#include "main.h"
/**
*main - start of the program
*Description: will check for alphabetic characters lower or upper 
*Return: value 1 is alphabet and 0 otherwise
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
