#include <stdio.h>
int main()
{
    char x, y;
    printf("please enter a letter:");
    x = getchar();
    
    if (x >= 'a' && x <= 'z') {
        y = x - 'a' + 'A';
        putchar(y);
    }
    else if (x >= 'A' && x <= 'Z') {
        y = x - 'A' + 'a';
        putchar(y);
    }
    else {
        printf("sb");
    }
    
    return 0;
}