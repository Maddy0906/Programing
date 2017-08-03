#include<stdio.h>
#include<stdlib.h>
#define MAXLINE 1000

void squeeze(char str1[],char str2[]);

int main(void){
    char str1[MAXLINE];
    char str2[MAXLINE];

  //input str1
    printf("Enter string1 :");
    scanf("%s",str1);
  //input str2
    printf("Enter string2 :");
    scanf("%s",str2);
  
  //call function squeeze
  squeeze(str1,str2);

  printf("Modifies string: %s\n", str1);
  return 0;
}

  //call function squeeze
 
  void squeeze(char s1[], char s2[]){
  int i,j,k;

  //loop repeats up to end of string s1
  for(i=k=0; s1[i]!='\0'; i++){
   //loop compare each char s2 with s1
   for(j=0; s2[j]!='\0' && s2[j]!=s1[i]; j++);
   //if char in s2 not found in s1
   if(s2[j]=='\0')
      s1[k++] = s1[i];
   }
   
  s1[k] = '\0';
}
   
    
   
