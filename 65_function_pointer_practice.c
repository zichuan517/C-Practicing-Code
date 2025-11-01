#include <stdio.h>

int max(int a, int b){
    return a>b?a:b;
}

int min(int a, int b){
    return a<b?a:b;
}

void V(int a, int b, int(*fp)(int, int)){
    printf("%d",fp(a,b));
}

int main(){
    int m = 725;
    int n = 517;
    V(m,n,min);
    return 0;
}