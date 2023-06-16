#include <stdio.h>
/**
  *main - starting point
  *Return: success is 0
  */
int main(void)
{
	char o= 'A';
	char i= 'a';
	while(i <= 'z')
	{
		putchar(i);
		i++;
	}
	while(o <= 'Z')
	{
		putchar(o);
		o++;
	}
	putchar('\n');
	return (0);
}
