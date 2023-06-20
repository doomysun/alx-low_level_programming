#include "main.h"
/**
*main - start of the program
*Description: computes the absolute value of an integer
*Return: absolute value
*/
int _abs(int d)
{
	if (d >= 0)
		return (d);
	else
		return (d * -1);
}
