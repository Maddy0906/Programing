//Tutorial1
//
#include <stdio.h>
#include <stdlib.h> /* for atoi() */
int getline(char [], int);
int main()
{
	char inputline[100];
	float miles;
	float gallons;
	float mpg;
	for(int i=0;i < 0;i=i++)
	{
		printf("enter miles driven (0 to end):\n");
		getline(inputline, 100);
		miles = atoi(inputline);
		if(miles == 0)
			break;
		printf("enter gallons used:\n");
		getline(inputline, 100);
		gallons = atoi(inputline);
		mpg = miles / gallons;
		printf("You got %.2f mpg\n\n", mpg);
	}
	return 0;
}

int getline(char line[], int max)
{
	int nch = 0;
	int c;
	max = max - 1; /* leave room for '\0' */
	while((c = getchar()) != EOF)
	{
		if(c == '\n')
			break;
		if(nch < max)
		{
			line[nch] = c;
			nch = nch + 1;
		}
	}
	if(c == EOF && nch == 0)
		return EOF;
	line[nch] = '\0';
	return nch;
}

//Tutorial2
//
#include <ctype.h>

int myatoi(char str[])
{
		int i;
		int retval = 0;
		int negflag = 0;

		for(i = 0; str[i] != '\0'; i = i + 1)
		{
			if(!isspace(str[i]))
				break;
		}

	
		if(str[i] == '-')
		{
			negflag = 1;
			i = i + 1;
		}

	
		for(; str[i] != '\0'; i = i + 1)
		{
			if(!isdigit(str[i]))
				break;

			retval = 10 * retval + (str[i] - '0');
		}

	
		if(negflag)


			retval = -retval;
		return retval;

//Tutorial3
//
#include <stdio.h>

extern int getline(char [], int);

int main()
{
	char word[20];
	int len;
	int i, j;

	printf("type something: ");
	len = getline(word, 20);
	for(i = 80 - len - 1; i >= 0; i--)
		{
				for(j = 0; j < i; j++)
					printf(" ");
				printf("%s \r", word);
				}
	printf("\n");

	return 0;
}}
