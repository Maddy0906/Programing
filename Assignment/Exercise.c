//1
#include <stdio.h>

int main(){
	 int i;
	  int count = 0;
	   for(i=1; i<=10; i= i++){
		        if(i>3)
	       count = count+1;
	    }
	      printf("%d numbers were greater than 3\n", count);
	      return 0;
}

//Ex2
#include <stdio.h>

int main()
{
	int i;
	float sum = 0;
	int n = 0;

	for(i = 1; i <= 10; i = i + 1)
			{
					sum = sum + i * i;
						n = n + 1;
							}

	printf("the average is %f\n", sum / n);

	return 0;
}

//Ex3
#include <stdio.h>

int main()
{
    int i;	
    for(i = 1; i <= 10; i = i + 1)
    {
     if(i % 2 == 0)
	printf("%d is even\n", i);
     else
	printf("%d is odd\n", i);													}
     return 0;
}

//Ex4

          if(x > 0)
		{
		if(y > 0)
	        	printf("Northeast.\n");
		else if(y < 0)
		       printf("Southeast.\n");
		else	printf("East.\n");
		}else if(x < 0)
                {  
         	if(y > 0)
		printf("Northwest.\n");
		else if(y < 0)
         		printf("Southwest.\n");
		else	printf("West.\n");
                }
                else	{
		if(y > 0)
			printf("North.\n");
			else if(y < 0)
				printf("South.\n");
			else	printf("Nowhere.\n");
					}
//5
   int main()
   {
    int i;
    int factorial = 1;
      for(i = 1; i <= 7; i = i + 1)
      {
        factorial = factorial * i;									
	printf("%d   %d\n", i, factorial);
      }	
      return 0;
   }

//6
  #include <stdio.h>

  int main()
  {
	  int i;
	  int fibonacci = 1;
	  int prevfib = 0;
	  int tmp;
	  for(i = 1; i <= 10; i = i + 1)
	  {	
            printf("%d   %d\n", i, fibonacci);														tmp = fibonacci;
	    fibonacci = fibonacci + prevfib;
	    prevfib = tmp;
	  }
	  return 0;
   }

//7

#include <stdio.h>
#include <math.h>

int main()
{
	int i, j;
	double sqrti;

	printf("%d\n", 2);

	for(i = 3; i <= 100; i = i + 2)
	{
	sqrti = sqrt(i);	
        for(j = 2; j < i; j = j + 1)
	{
	if(i % j == 0)
	        break;			
	if(j > sqrti)			
	{															printf("%d\n", i);
		break;
	}																}	
	}

	return 0;
     }

