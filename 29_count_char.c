#include <stdio.h>
int main()
{
    int count=0;
    char c=getchar();
    getchar();
    while (c != '0')
    {
    if ((c>='A' && c<='Z')|| c>='a' && c<='z')
        count += 1;
    c=getchar();
    getchar();
    }
    printf("the total number of characters is %d",count);
    return 0;
}