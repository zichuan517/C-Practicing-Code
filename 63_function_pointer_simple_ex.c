// 函数本身代表了函数的入口地址
#include <stdio.h>
int add(int a, int b){
    return a+b;
}

int main(){
    int (*fp) (int, int) = add;
    int result = fp(3,5);
    printf("the result is %d\n",result);
    return 0;
}
// 函数指针可以作为某个函数的参数，而函数不能作为某函数的参数