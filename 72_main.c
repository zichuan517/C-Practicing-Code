#include <stdio.h>
#include "70_circle.h"

int main(){
    double r = 5.0;
    double a = area(r);
    double p = perimeter(r);
    printf("the area of the circle is %.2f\n", a);
    printf("the perimeter of the circle is %.2f\n", p);
    return 0;
}
/*
想要得到运行结果，需要在终端输入：
1.编译
gcc 71_circle.c 72_main.c -o circle
来得到circle.exe
2.运行
.\circle
来运行circle.exe

或者同时进行
gcc 71_circle.c 72_main.c -o circle && .\circle
*/