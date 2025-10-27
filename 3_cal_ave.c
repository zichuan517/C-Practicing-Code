#include <stdio.h>
int main()
{
	int i, ave, x, sum = 0;
	for (i = 1; i < 5; i = i + 1)
	{
		printf("请输入您的数字");
		scanf("%d", &x);
		sum = sum + x;
	}
	ave = sum / 4;
	printf("平均值是%d",ave);
	return 0;
}