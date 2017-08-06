//1

int factorial(int n){
	if(n == 1)
		return 1;
	else
		return n*factrial(n-1);
}

//2

int fibonacci(int n){
	if(n<2)
		return n;
	return fibonacci(n-2)+fibonacci(n-1);
}

//3

int bunnyEars2(int bunnies){
	if(bunnies == 0)
		return 0;
	if(bunnies%2 == 1)
		return 2 + bunnyEars2(bunnies-1);
	return 3 + bynnyEars2(bunnies-1);
}

//4
int powerN(int base, int n){
	if(n ==1)
		return base;
	return base*powerN(base, n-1);
}

//5
 int sumDigits(int n){
	 if(n<10)
		 return n;
	 return sumDigits(n/10)+ n%10;
 }
