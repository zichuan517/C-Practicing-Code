#include <stdio.h>
#include <stdio.h>
int main()
{
    double pi=4.0*atan(1.0);
    double c,s;
    double r=8;
    c = 2*pi*r;
    s = pi*r*r;
    printf("半径为8时,圆的周长为:%.2f,圆的面积为：%.2f\n",c,s);

    double x1=2;
    double y1=8;
    double x2=6;
    double y2=5;
    double dist=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf("两点之间的距离为:%.2lf\n",dist);
    return 0;
}