#include <stdio.h>
int main()
{
int i,j;
    for (i=2;i<=100;i++){
        int isPrime=1;
        for (j=2;j<i;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime){
            printf("%d ",i);
        }
    }
    return 0;
}
