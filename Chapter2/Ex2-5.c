#include<stdio.h>

  int any(char str1[],char str2[]);

  int main(void){
  char str1[40];
  char str2[20];
  int res;

  //input string1
  printf("Enter string1 :");
  scanf("%s",str1);

  printf("Enter string2 :");
  scanf("%s",str2);

  res = any(str1,str2);
  if(res!= -1)
     printf("Position of a char of '%s' in '%s' is %d.\n", str2,str1,res+1);
     else
     printf("'%s' contains no characters of '%s'.", str1,str2);
     return 0;
   }

  int any(char s1[], char s2[]){
   int i,j;
   //loop repeats up to the end of s1
   for(i=0; s1[i]!='\0';i++)
   //loop repeats up to the end of s2
   for(j=0;s1[j]!='\0';j++)
      if(s1[i] == s2[j])
      return i;
   return -1;
}
