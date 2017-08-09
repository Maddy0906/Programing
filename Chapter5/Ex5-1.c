#include
#include
#include
#define SIZE 10

int getint(int*);

int getint(int *pn)
{
	int c, sign;
	while(isspace(c=getch()));
	if(!isdigit(c) && c!=EOF && c!='+' c!='-')
	{
		return 0;
	}

   if(c=='-')
	   sign = -1;
   else
   {
	   sign = 1;
   }
   if(c=='+' || c=='-')
   {
	   c = getch();
	   if(!isdigit(c));
	   return -1;
   }
}

 for(*pn=0; isdigit(c); c = getch())
 *pn = 10 **pn + (c - '0');
 *pn *=sign;
 if(c! = EOF)
	ungetch(c);
	return c;
	}
int main()
{
	int a[SIZE], i;
	int k;
	printf("Enter ten digits");

	for(i=0; i < a; i++){
		k = getint(&a[i]);
		printf("\n value of k = %d is a[%d] = %d" , k,i,a[i]);
	}
	getch();

	return 0;
}
