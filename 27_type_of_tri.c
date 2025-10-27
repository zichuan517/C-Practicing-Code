#include <stdio.h>
int main()
{
    int a=8;
    int b=4;
    int c=10;
    int delta_a = b*b+c*c-a*a;
    int delta_b = c*c+a*a-b*b;
    int delta_c = a*a+b*b-c*c;
    if ((a>b+c)||(b>c+a)||(c>a+b))
    printf("not triangle");    
    else if ((delta_a>0)&&(delta_b>0)&&(delta_c>0) )
    printf("acute-angled triangle");
    else if ((delta_a==0)||(delta_b==0)||(delta_c==0))
    printf("right triangle");
    else if((delta_a<0)||(delta_b<0)||(delta_c)<0)
    printf("obtuse-angled triangle");
    else
    printf("this is a bug");
}