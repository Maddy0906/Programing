//Ex1
#include <stdio.h>
 int a[]={1,2,3,4,5,6};
 int sum(int[],int);
  
 int sum(int a[], int n){
	     int i;
	         int sum = 0;
		     for(i=0; i < n; i=i+1)
			         sum = sum + a[i];
		         return sum;
 }

int main()
{
	 
	 printf("%d\n",sum(a,6));
	  return 0;
}

//Ex2

