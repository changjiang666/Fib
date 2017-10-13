#include "iteration.h"
#include "recursion.h"

main(void)
{
	for (int i = 1; i < 10; ++i)
		printf("%d\n", fib2(i));

	system("pause");
	return 0;
}