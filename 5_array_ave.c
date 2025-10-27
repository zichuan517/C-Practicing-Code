#include <stdio.h>
int main()
{
	float data[5] = { 517,621,725,802,924 };
	float ave, sum = 0;
	int i;
	for (i = 0; i < 5; i++)
	{
		sum = sum + data[i];
	}
	ave = sum / 5;
	printf("the average is %f", ave);
	return 0;
}