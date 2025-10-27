#include <stdio.h>
int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=i;j++){
            printf("%d*%d=%-2d ",j,i,i*j);
        }
        printf("\n");
    }
    
    for (int m=1;m<=9;m++){
        for(int n=1;n<=m;n++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
//%-2d表示左对齐，占两位
//% 2d表示右对齐，占两位