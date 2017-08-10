#include <stdio.h>

int square(int);

int main()
{
  int i;

  for(i = 1; i <= 10; i = i + 1)
     printf("%d  %d\n", i, square(i));
	
  return 0;
}

int square(int x){
	return x * x; 
}

