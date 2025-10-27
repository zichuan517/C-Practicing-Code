#include <stdio.h>
int main()
{
    int num1,num2;
    float res;
    char op;
    printf("please input two int number:");
    scanf("%d %d",&num1,&num2);
    getchar();
    printf("please choose one operation:(+,-,*,/)");
    op=getchar();
    switch(op){
        case '+': res=num1+num2;break;
        case '-': res=num1-num2;break;
        case '*': res=num1*num2;break;
        case '/': res=num1/num2;break;
        default:printf("please input a int number correctly");break;
    }
    printf("the result is %.2f",res);
    return 0;
}