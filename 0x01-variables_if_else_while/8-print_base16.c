  #include <stdio.h>
  /**
  *main - start of program
  *Return: 0is a good thing
  */
  int main(void)
  {
	int d;
	char l=97;
	while(d < 10 )
	{
		putchar(d + 48);
		d++;
	}
	do	
	{
		putchar(l);
		l++;
	} while(l <= 102);

	putchar('\n');

        return (0);
  }
