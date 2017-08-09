#include <stdio.h>

void reverseString(char str[]);

int main(void){
	char str[50] = "This is C program";
	reverseString(str);

	printf("The reverse string is : %s\n",str);

	return 0;
}

void reverseString(char string[]){
	static int loop, loop1 = 0;

	int cnt;

	if(loop ==0)
	{
		loop1 = strlen(string)-1;
	}

	cnt = string[loop];

	string[loop] = string[loop1];

	string[loop} = cnt;

	loop++;
	loop1--;
	
        while(loop < loop1)
	reberseString(string);
	}
