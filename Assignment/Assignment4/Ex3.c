#include <stdio.h>

int main(void){
int c;
 while((c = getchar()) != EOF)
	 printf("you typed '%c'\n", c);
}
