#include <stdio.h>
int main()
{
    int arr[5][5]={1};
    
    for(int k=0;k<5;k++){
        arr[k][0]=1;
    }
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }

    for(int m=0;m<5;m++){
        for(int n=0;n<=m;n++){
            printf("%d ",arr[m][n]);
        }
    printf("\n");
    }
    return 0;
}