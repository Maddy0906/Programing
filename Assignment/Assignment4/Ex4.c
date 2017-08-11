#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern int getline(char [], int);

int main()
{
	char line[100];
	int x;
	double sum, sumsq;
	int n;
	double mean, stdev;


	sum = sumsq = 0.0;

	n = 0;
	while(getline(line, 100) != EOF)
	{
		x = atoi(line);
		sum = sum + x;
		sumsq = sumsq + x * x;
		n = n + 1;
	}
	mean = sum / n;
	stdev = sqrt((sumsq - sum * sum / n) / (n - 1));
	printf("mean: %f\n", mean);
	printf("std. dev.: %f\n", stdev);
	return 0;
}
