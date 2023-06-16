  #include <stdio.h>
  /**
  *main - start of program
  *Return: 0is a good thing
  */
  int main(void)
  {
          int d=48;
	  int b=44;
          while(d < 58)
        {
                putchar(d);
		d++;
		if(d != 58) 
			putchar(b);
	        else break;
	}
	  putchar('\n');
          return (0);
 }

