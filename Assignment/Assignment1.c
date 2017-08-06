//Exercises 1
//Create c file and write code that 
//main(){
//printf("Hello, world!");
//}
//
//save the file.
//Write code on terminal
// gcc -o filename filename.
// ./filename
//
// It will run and display screen "Hello, world!"

//Excercises 2

for(i=0; i<10; i=i+2){
    printf("%d\n", i);
   }

[print]
0
2
4
6
8

for(i=100; i>=0; i=i-7){
	        printf("%d\n", i);
		    }
[print]
100
93
86
79
72
65
58
51
44
37
30
23
16
9
2

  for(i=1; i<=10; i=i+1){
      printf("%d\n", i);
		    }
[print]
1
2
3
4
5
6
7
8
9
10

  for(i=2; i<100; i=i*2){ 
      printf("%d\n", i);
		        }   
[print]
2
4
8
16
32
64

//Ex3
 main(){
     int i;
     for(i=0;i<=10;i=i++){
	     printf("%d  %d\n", i, i*i)
     }
     return 0;
 }

//Ex4
 main(){
	 for(i=1 i<10;i=i+1;){
	    for(j=1; j<=i; j=j;1){
            printf("*");
          	}
         printf("\n");
         }
         return 0;	 
