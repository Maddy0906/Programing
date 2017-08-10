#include <stdlib.h>

int randrange2(int m, int n)
{
	return rand() % (n - m + 1) + m;
}

int main(void)
{
}
