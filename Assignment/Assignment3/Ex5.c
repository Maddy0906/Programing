#include <stdio.h>

int factorial(int);

int main()
{
		int i;
		for(i = 1; i <= 7; i = i + 1)
			printf("%d   %d\n", i, factorial(i));
		return 0;
}

int factorial(int x)
{
		int i;
		int fact = 1;
		for(i = 2; i <= x; i = i + 1)
			fact = fact * i;
		return fact;
}
