#include "main.h"
/**
* _isalpha - start of the program
*@c: character to be checked
* Description: will check for alphabetic characters lower or upper
* Return: value 1 is alphabet and 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
	_putchar('\n');
}
