#include <stdio.h>
int main()
{
    int array[3][3];
    printf("please enter 9 integer:\n");
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            scanf("%d",&array[i][j]);
        }
    }
    printf("check array:\n");
    for (int t=0;t<3;t++){
        for(int r=0;r<3;r++){
        printf("%d ",array[t][r]);
        }
        printf("\n");
    }
    return 0;
}