#include "main.h"

/**
* _isupper - checks for uppercase letter
* @d: letter to be checked
* Return: 1 if it is uppercase, o otherwise
*/

int _isupper(int d)
{
	if (d >= 65 && d <= 90)
	{
		return (1);
	}
	return (0);
}
