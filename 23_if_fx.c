#include <stdio.h>
int main()
{
    int x=6;
    int y;
    if (x > 10)
    y = 2*x+9;
    else if (x >= 1 && x <= 10)
    y = x+1;
    else if (x==0)
    y = 0;
    else
    y = 2*x-9;
    printf("%d",y);
    return 0;
}