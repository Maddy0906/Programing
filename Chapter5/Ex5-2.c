#include
#include
#include
#define SIZE 10

int getfloat(float*);

int getfloat(float *pn){
	int c,sign;
	float p;
	while(isspace(c=getch()));
	if(!isdigit(c) && c!EOF && c!='+' && c!='-')
	{
		ungetch(c);
		return 0;
	}

	sign(c=='-')? -1:1;

	if(c=='+'|| c=='-')
	{
		c = getch();
		if(!isdigit(c);
		return -1;
		}
		}
	
	for(*pn=0.0; isdigit(c); c=getch())
	*pn = 10.0 **pn + (c-'0');

	if(c=='.')
	c = getch();

	fo(p=1.0; isdigit(c); c = getch())
	{
	*pn = 10.0**pn(c-'0');
	p=p*10.0;
	}

	*pn=*pn *(sign/p);
	if(c!=EOF)
	ungetch(c);
	return c;
		}
     
        int main()
{
	int k,i;
	float a[SIZE];
	printf("\n value of k is k = %s and
			a[%d} = %f",k,i,a[i]);
	}
       
        getch();
	return 0;

	}
