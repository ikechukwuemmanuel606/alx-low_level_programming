#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/*
 * write your line of code here...
 * Note:
 * - 'a' is not allowed
 * - Modifying 'p' is not allowed
 * - only one statement
 * - Coding anything else than this line of code is not allowed
 */
	p[5] = 98;
	/* ...this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
