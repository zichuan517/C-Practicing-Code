#include <stdio.h>
int main()
{
    struct point{
        float x;
        float y;
    };

    struct point set[3]={{1,3},{2,6},{3,9}};

    float slope01 = (set[0].y - set[1].y) / (set[0].x - set[1].x);
    float slope02 = (set[0].y - set[2].y) / (set[0].x - set[2].x);   
    
    if (slope01 == slope02)
        printf("yes");
    else
        printf("no");
    
    return 0;
}