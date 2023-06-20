#include "main.h"
/**
* _abs - start of the program
* @d: integer to be computed
* Description: computes the absolute value of an integer
* Return: absolute value
*/
int _abs(int d)
{
	if (d >= 0)
		return (d);
	else
		return (d * -1);
}
