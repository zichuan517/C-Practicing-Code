#include <stdio.h>
int main()
{
    int target = 42;
    int guess;
    printf("guess begin\n");
    do {
        scanf("%d", &guess);
        if (guess > target)
            printf("too large!\n");
        else if (guess < target)
            printf("too small!\n");
        else
            break;
        printf("guess again\n");
    } while (guess != target);
    printf("WOW!YOU GET IT!\n");    
    return 0;
}