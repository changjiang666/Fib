#include "recursion.h"

int fib2(int n)
{
	if (n < 0)
	{
		printf("Input Error");
		return (-1);
	}
	if (n < 2)
		return (n == 0) ? 0 : 1;
	return fib2(n - 1) + fib2(n - 2);
}