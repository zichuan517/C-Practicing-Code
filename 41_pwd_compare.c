#include <stdio.h>
#define N 15
int main()
{
    int i,j;
    char pwd[N]="zhimakaimen";
    char str[N]={0};
    for (i=0;i<5;i++){
        printf("please input the password:\n");     
        scanf("%s",str);
        for (j=0;j<N && str[j] == pwd[j];j++);
        if (j == N){
            printf("Welcome!\n");
            return 0;
            }
        else
            printf("Error!\n");
    }
    printf("Fail to enter!\n");
    return 1;
}
