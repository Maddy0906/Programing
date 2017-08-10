/*print an addition table for 1 + 1 up to 10 + 10*/

 //Tutorial1
#include <stdio.h>

int main(){
	int i, j;
	/*print header line:*/
	printf(" ");
	for(j = 1; j < 10; j = j +1)
	   printf("%3d",j);
	printf("\n");
	/*print table:*/
	for(i = 1; i<=10; i=i+1)
	{
	printf("%2d",i);
        for(j=1; j<= 10; j=j+1)
	    printf("%3d",i*j);
        printf("\n");
	}
	return 0;
   }

//Tutorial2

#include <stdio.h>
int main()
{
	int i, j;
	for(i = 1; i <= 10; i = i + 1)
	{
		for(j = 1; j <= 10; j = j + 1)
		{
			if((i + j) % 3 == 0)
				printf("* ");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}

//Tutorial3
#include <stdio.h>
int main()
{
	int i;
	int squares[11]; /* [0..10]; [0] ignored */
	int cubes[11];
	/* fill array: */
	for(i = 1; i <= 10; i = i + 1)
		squares[i] = i * i;
	        cubes[i] = i * i * i;
	/* print table: */
	printf("n\tsquare\n");
	for(i = 1; i <= 10; i = i + 1)
		printf("%d\t%d\t%d\n", i, squares[i],cube[i]);
	return 0;
}

//Tutorial4
#include <stdio.h>
int printbox(int);
int main()
{
	int i;
	for(i = 1; i <= 10; i = i + 1)
	{
		printbox(i);
		printf("\n");
	}
	return 0;
}

int printbox(int n)
{
		int i, j;
		for(j = 0; j < n; j = j + 1)
		    printf("*");
		printf("\n");
		for(i = 0; i < n-2; i = i + 1)
		{
	         printf("*");
		 for(j = 0; j < n-2; j = j + 1)
                	printf(" ");	
		 printf("*\n");													}
		for(j = 0; j < n; j = j + 1)
			printf("*");
		printf("\n");
		return 0;
}
