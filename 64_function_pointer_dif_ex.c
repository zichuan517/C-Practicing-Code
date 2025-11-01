#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

void operate(int a, int b, int(*fp)(int, int)){
    int result = fp(a,b);
    printf("the result is: %d\n", result);
}

int main(){
    
    int num_1 = 10;
    int num_2 =5;

    operate(num_1, num_2, add);
    operate(num_1, num_2, subtract);
    
    return 0;
}