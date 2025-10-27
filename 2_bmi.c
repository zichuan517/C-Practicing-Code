#include <stdio.h>
int main()
{
    int weight;
    float height, bmi;
    printf("please input your weight(kg):\n");
    scanf("%d", &weight);
    printf("please input your height(m):\n");
    scanf("%f",&height);
    bmi=weight / (height * height);
    if (bmi > 25)
        printf("You are fucking overweight.\n");
    else
        printf("Wow,you are fucking healthy.\n");
    return 0;
}