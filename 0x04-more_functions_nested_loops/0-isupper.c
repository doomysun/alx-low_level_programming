#include "main.h"

/**
* _isupper - checks for uppercase letter
* @d: letter to be checked
* Return: 1 if it is uppercase, o otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
