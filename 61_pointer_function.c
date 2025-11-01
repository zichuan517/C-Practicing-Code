#include <stdio.h>

int* return_var(){
    int  num = 10;
    int* ptr = &num;
    return ptr;
}

int main(){
    int* ptr = return_var();
    printf("the value of a local variable 'num' is: %d \n",*ptr);
    return 0;
}

// 按理说：这个程序是不能正确运行的。
// 因为num是局部变量，动态存储，声明周期有限
// 但由于栈惰性原理（还没来得及弹出），所以没出问题