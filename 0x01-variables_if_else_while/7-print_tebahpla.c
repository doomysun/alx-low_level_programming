#include <stdio.h>
/**
*main - starting point
*Return: 0 is a good thing
*/
int main(void)
{
	char d;

	for (d = 'z'; d >= 'a'; d--)
		putchar(d);
	putchar('\n');
	return (0);
}
