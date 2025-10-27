#include <stdio.h>

int main()
{
    int count = 0;
    char str[100];
    
    printf("input something:\n");
    scanf("%99s", str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    
    printf("you input %d char in total:", count);
    return 0;
}