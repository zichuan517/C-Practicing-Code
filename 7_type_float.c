#include <stdio.h>
int main()
{
	float  x1 = 0.1;
	double x2 = 0.1;
	if (x1 == x2)
		printf("equal\n");
	else
		printf("inequal\n");
	if (fabs(x1-x2)<1e-6)
	    printf("equal\n");
	else
	    printf("inequal\n");
	printf("x1=%.15f\nx2=%.15f\n", x1, x2);
	return 0;
}