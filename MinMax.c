#include <studio.h>
#include <limits.h>
#include <float.h>

int main(){

    printf("The number of bits in a byte %d\n", CHAR_BIT);

    printf("The min value you can store SIGNED CHAR is %d\n , SCHAR_MIN");
    printf("The max value you can store SIGNED CHAR is %d\n, SCHAR_MAX");
    printf("The max value you can store UNSIGNED CHAR is %d\n, UCHAE_MAX");

    printf("The max value you can store in(int) variable is %d\n" , INT_MIN);
    printf("The min value you can store in(int) variable is %d\n" , INT_MAX);
   
    printf("The max value you can store char variable is %d\n" , CHAR_MIN);
    printf("The min value you can store char variable is %d\n" , CHAR_MAX);
  
    printf("The max value you can store short int is %d\n" , SHRT_MAX);
    printf("The min value you can store short int is %d\n" , SHRT_MIN);
   
    printf("The min value you can store long int is %ld\n" , LONG_MIN);
    printf("The max value you can store long int is %ld\n , LONG_MAX");

    printf("The max value you can store (Float) variable is %.10e\n", FLT_MAX);
    printf("The min value you can store in (FLOAT) variable is %.10e\n", FLT_MIN);
    return 0;
}

