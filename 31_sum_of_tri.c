/*
Q:用for循环打印1到50中的所有偶数，但跳过能被3整除的偶数，
并在遇到第一个大于40的偶数时，用break退出循环。
*/

#include <stdio.h>
int main()
{
    for(int i=0;i<=50;i++)
    {
        if (i%2!=0)
            continue;
        if (i%3==0)
            continue;
        if (i>40)
            break; 
        printf("%d\n",i);       
    }
    return 0;
}