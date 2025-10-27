#include <stdio.h>
int main()
{
    int year = 2048;
    if ((year%4==0)&&(year%100!=0)||(year%400==0))
        printf("this year is a leap year\n");
    else
        printf("this year is not a leap year\n");
    return 0;
}