#include <stdio.h>


#define MAX_NUM 1024
#define TRUE 1
#define FALSE 0

int main(){
//const prefix to declare constants with a specific type

    //const int i;
    //i = 10 + 2 + MAX_NUM;
    const char NEWLINE ='\n';
    
    printf("%c\n",NEWLINE);
    
    printf("%d\n",0xab); // 171 hex ?
    printf("%d\n",215u);
    printf("%d\n", 301);
    printf("%lu\n",201ul);
    printf("%d\n", 011);// 9 octal ?

    printf("%f\n", 3.1415);
    printf("%Lf\n" , 3.1415E-5L);
    printf("%c\n",'x');
    printf("%c\n", 'a');
    printf("%c\n",'\t');
    printf("%c\n", '\"');

    if(TRUE){
             printf("This is TRUE!\n");
    }       

    return 0;
}
