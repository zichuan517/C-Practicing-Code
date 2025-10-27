#include <stdio.h>
int main()
{
    printf("%d\n",1+2-3/4*5);
    printf("%.2f\n",1+2-3/4.0*5);	
	short a = 32767;
	printf("the length of type short is %d B\n", (int)sizeof(short));
	a = a + 3;
	printf("the value of a is %d", a);
	return 0;
}