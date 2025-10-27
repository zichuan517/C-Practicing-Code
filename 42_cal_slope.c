#include <stdio.h>
int main()
{
    struct point{
        float x;
        float y;
    };
    struct point p1 = {1,3};
    struct point p2 = {2,6};

    float slope = (p2.y-p1.y)/(p2.x-p1.x);
    printf("%f",slope);
}