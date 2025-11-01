#include <stdio.h>
#include "73_func.h"

int square_adder(int a, int b){
    return ADD(square(a), square(b));
}

int main(){
    printf("%d\n",square_adder(3,4));
    return 0;
}