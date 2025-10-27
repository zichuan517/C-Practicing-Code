#include <stdio.h>
int main()
{
	int i;
	float GPA;
	for (i=0;i<3;i++)
	{
		printf("please enter you GPA:");
		scanf("%f",&GPA);
		if (GPA>4.3)
			printf("cheat!\n");
		else
			printf("go on!\n");
	}
	return 0;
}