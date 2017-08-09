#include <stdio.h>

#define swap(datatype, valOfX,ValueOfY)

int main(){
	int val1 = 56, val = 98;

	char*val3,val4;
	val3 = "Hi";
	val4 = "Pointing";

	printf("integer values before the swap operation; %d and second is; %s\n",val1,val2);

	swap(int,val1,val2);

	printf("integer values after the swap operation:%d and second is: %d\n",val1,val2);

	printf("\n\n");

	prinf("char value before the swap opertion:%s and second is:%s\n",val3,val4);

	swap(char*,val3,val4);

	printf("char val after the swap operation:%s and second %s\n", val3, val4);

	return 0;
}
