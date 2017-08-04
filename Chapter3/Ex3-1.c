#include<stdio.h>
#include<time.h>

int binserch(int x, int v[], int n){
 int low, high, mid;
 low = 0;
 high = n -1;
 mid = (low + high )/2;

 while(low < high && x != v[mid]){
 
 if(x > v[mid]){
    low = mid + 1;
 }else{
  high = mid - 1;
}
  mid = (low + high) /2;
}
  if (x == v[mid]){
 return mid;
}else{
 return -1;
}

main(void){
 
 int arr[] = {2,4,6,7,9,29,45,49,51,52}
 printf("%d\n", binserch(9,arr, 10));
 clock_t end = clock();

 double time_spent = (double) (end - begin) / CLOCKS_PRE_SEC;
 printf("%lf", time_spent);
 return 0;
}

}
