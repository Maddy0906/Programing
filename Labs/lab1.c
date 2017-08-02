#include<stdio.h>

int main(){

    //Binary, Hexadecimal, Decimal

    //1. Converting Decimal to Binary
    int decimal;
    int binary = 0;
    int base = 1;

    //a. 12
    decimal = 12;
    while(decimal > 0){
    binary = binary + (decimal %2)*base;
    decimal = decimal / 2;
    base = base * 10;
    }
    printf("a.Decimal 12 is Binary %d\n", binary);

    //b.185
    decimal = 185;
    binary = 0;
    base = 1;
    /*while(decimal > 0){
    binary = binary + (decimal %2)*base;
    decimal = decimal / 2;
    base = base * 10;
    }*/
    printf("b.Decimal 185 is Binary %d\n", binary);

    //c.294
    binary = 0;
    decimal = 294;
    base = 1;
    while(decimal > 0){
    binary = binary + (decimal %2)*base;
    decimal = decimal / 2;
    base = base * 10;
    }
   printf("c.Decimal 294 is Binary %d\n", binary);

   //2. Converting Binary to Decimal
   int binary02;
   int decimal02 = 0;
   base = 1;

   //a. 101101
   binary02 = 101101;
   while(binary02 > 0){
   decimal02 = decimal02 + (binary02 % 10)*base;
   binary02 = binary02 / 10;
   base = base * 2;
   }   
   printf("a.Binary 101101 is Decimal %d\n", decimal02);

   //b. 11101011
   binary02 = 11101011;
   decimal02 = 0;
   base = 1;

   while(binary02 > 0){
   decimal02 = decimal02 + (binary02 % 10)*base;
   binary02 = binary02 / 10;
   base = base * 2;
   }
   printf("b.Binary 11101011 is Decimal %d\n", decimal02);
   
   //c. 1010
   binary02 = 1010;
   decimal02 = 0;
   base = 1;
   while(binary02 > 0){
   decimal02 = decimal02 + (binary02 % 10)*base;
   binary02 = binary02 / 10;
   base = base * 2;
   }
   printf("c.Binary 1010 is Decimal %d\n", decimal02);

   //3.Converting Decimal to Hexadecimal
   char Hex[16] = "0123456789ABCDEF";
   char Ans[10];
   int i=0, j=0;
   int num;

   //a.138
   num = 138;
   while(num > 0){
   j= num % 16;
   num = num / 16;
   Ans[i] = Hex[j];
   i++;
   }
   i--;

   for (j=i; j>0; j--){
   Printf("a.Decimal 138 is Hexadecimal %c",Ans[j]);
   }

   //b.119
　 num = 119;
   i=0, j=0;

   while(num > 0){
   j= num % 16;
   num = num / 16;
   Ans[i] = Hex[j];
   i++;
    }
   i--;

   for (j=i; j>0; j--){
   Printf("b.Decimal 119 is Hexadecimal %c",Ans[j]);
    }

   //c.59
   num = 59;
   i=0, j=0;

   while(num > 0){
   j= num % 16;
   num = num / 16;
   Ans[i] = Hex[j];
   i++;
    }
   i--;

   for (j=i; j>0; j--){
   Printf("c.Decimal 59 is Hexadecimal %c",Ans[j]);
    }

   //4.Converting Hexadecimal to Decimal
   //a.0x1A
   
   
   //b.0x3F31
   //c.0x31C

   //5.Converting Binary to Hexadecimal
   //a.10010111
   //b.101101111110
   //c.1111

   //6.Converting Hexadecimal to Binary
   //a.0x1A3B
   //b.0xABCD
   //c.0x111111
   
   return 0;
   }

