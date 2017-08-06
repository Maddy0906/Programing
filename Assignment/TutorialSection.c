//1
#include<stdio.h>

int main(){
	printf("Hello,");
	printf("world!\n");
	return 0;
        }

[print]
Hello, world!

//2
int main(){  
	int i;
	printf("statement 1\n");
	printf("statement 2\n");
	for(i = 0; i < 10; i = i + 1)
	{
		printf("statement 3\n");
		printf("statement 4\n");
	}
	printf("statement 5\n");
	return 0;
        }
[print]
statement 1
statement 2
statement 3
statement 4
statement 3
statement 4
statement 3
statement 4
statement 3
statement 4
statement 3
statement 4
statement 3
statement 4
statement 3
statement 4
statement 3
statement 4
statement 3
statement 4
statement 3
statement 4
statement 5

#include <stdio.h>
int main(void){
	  int i;
	    
	    printf("statement 1\n");
	      printf("statement 2\n");
	        for(i=0; i<10; i=i+1)
			  printf("statement 3\n");
		  printf("statement 4\n");
		    
		    printf("statement 5\n");
		      
		      return 0;
}

[print]
statement 1
statement 2
statement 3
statement 3
statement 3
statement 3
statement 3
statement 3
statement 3
statement 3
statement 3
statement 3
statement 4
statement 5

//3
nt main(void){
	  int i,j;
	    
	    printf("start of program\n");
	      
	      for(j=0; j<3; j=j+1)
	      {
	       printf("i is %d\n",i);
	       for(i=0; i<5;i=i+1)
	       printf("i is %d, j is %d\n",i,j);
	       printf("end of i = %d loop\n", i);
	      }
	        
	        printf("end of program\n");
		return 0;
            }

[print]

start of program
i is 5
i is 0, j is 0
i is 1, j is 0
i is 2, j is 0
i is 3, j is 0
i is 4, j is 0
end of i = 5 loop
i is 5
i is 0, j is 1
i is 1, j is 1
i is 2, j is 1
i is 3, j is 1
i is 4, j is 1
end of i = 5 loop
i is 5
i is 0, j is 2
i is 1, j is 2
i is 2, j is 2
i is 3, j is 2
i is 4, j is 2
end of i = 5 loop
end of program

//4
int main(){
	    
	int day, i;
	for(day = 1; day <= 3; day = day + 1){
	printf("On the %d day of Christmas, ", day);
	printf("my true love gave to me\n");
	for(i = day; i > 0; i = i - 1){
	    if(i == 1){
		if(day == 1) printf("A ");
		else printf("And a ");
		printf("partridge in a pear tree.\n");													                
	    }
	    else if(i == 2) {
		    printf("Two turtledoves,\n");								                      }
	    else if(i == 3) {	
		    printf("Three French hens,\n");												                     }
	    printf("\n");											                  }
    }
	return 0;
		           }

[print]
On the 1 day of Christmas, my true love gave to me
A partridge in a pear tree.

On the 2 day of Christmas, my true love gave to me
Two turtledoves,

And a partridge in a pear tree.

On the 3 day of Christmas, my true love gave to me
Three French hens,

Two turtledoves,

And a partridge in a pear tree.

//5
int main(){
	    
	int day, i;
	     for(day = 1; day <= 4; day = day + 1){
		 printf("On the %d day of Christmas, ", day);
	         printf("my true love gave to me\n");
	         for(i = day; i > 0; i = i - 1){
		     if(i == 1){
			if(day == 1) printf("A ");
		              else printf("And a ");
		               printf("partridge in a pear tree.\n");											                 }
				else if(i == 2) {
					printf("Two turtledoves,\n");										                      }
			        else if(i == 3) {
  			                printf("Three French hens,\n");						                     }
 		　              else if(i == 4){										                      printf("calling birds, golden rings, geese a-laying,\n");
			                     }
	                    printf("\n");
		                }
  	     }
	             return 0;
         }

//6
int main(){
	    
	int day, i;
	     for(day = 1; day <= 4; day = day + 1){
		 printf("On the %d day of Christmas, ", day);
	         printf("my true love gave to me\n");
			for(i = day; i > 0; i = i - 1){
			    if(i == 1){
			       if(day == 1){ 
				printf("first");
				else printf("And a ");												                 printf("partridge in a pear tree.\n");
 			       }else if(i == 2) {
				printf("second");
				printf("Two turtledoves,\n");
			       }else if(i == 3) {
				       printf("third";)
				       printf("Three French hens,\n");
			       }else if(i == 4){
				 printf("calling birds, golden rings, geese a-laying,\n");
			       }
			       printf("\n");
			    }
			      }
			return 0;
	     }
           }

//7
nt main(){
	    
	int day, i;
	     for(day = 1; day <= 3; day = day + 1){
		 printf("On the %d day of Christmas, ", day);
	         printf("my true love gave to me\n");
        if(day >= 3)
	   printf("Three French hens,\n");
        if(day >= 2)
           printf("Two turtledoves,\n");
	if(day >= 1)		
	{	
        if(day == 1) printf("A ");
	else printf("And a ");
	printf("partridge in a pear tree.\n");										       }
        }
	     return 0;
     }
