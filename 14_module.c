#include <stdio.h>
int main()
{
	int a=14, b=3;
	printf("%d", a == (a / b) * b + a % b);
	return 0;
}