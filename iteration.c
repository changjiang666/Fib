#include "iteration.h"

void fib1(int n)
{
	int a = 0, b = 1;
	int i;
	printf("%d\n%d\n", a, b);
	for (i = 2; i < n; ++i)
	{
		a = a + b;
		b = a + b;
		printf("%d\n%d\n", a, b);
	}
}