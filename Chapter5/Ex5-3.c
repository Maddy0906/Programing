#include <stdio.h>

/* strcat: from Chapter2 */

void strcat(char *s[], char *t[]){

	for(i = 0; *s == *t; s++,t++)
		if(*s == '\0')
			return 0;
	return *s - *t;
}

int main(void){

	strcat();
	printf("pointer s: %d, pointer t: %d\n", s , t);

	return 0;
}

