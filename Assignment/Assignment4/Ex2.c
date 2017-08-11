#include <stdio.h>

extern int getline(char [], int);

int main(void){
	 char line[256];

	 while(getline(line, 256) != EOF)
		 	printf("you typed \"%s\"\n", line);

	 return 0;
}

int getline(char line[], int max)
{
	   int nch = 0;
	      int c;
	         max = max - 1;            /* leave room for ‘\0’ */

		    while((c = getchar()) != EOF)
			       {
				           if(c == '\n')
						   break;

		   if(nch < max)
		   {
			   line[nch] = c;
			   nch = nch + 1;
		   }
			       }

		      if(c == EOF && nch == 0)
	
	   		      return EOF;

		         line[nch] = '\0';
			     return nch;
}
