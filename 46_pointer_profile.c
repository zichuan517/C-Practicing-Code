#include <stdio.h>

int main() {
    int var = 10;
    int* ptr = &var;
    int** doubleptr  = &ptr;
    
    printf("变量var的值: %d\n", var);
    printf("变量var的地址: %p\n", &var);
    printf("指针ptr的值(即var的地址): %p\n", ptr);
    printf("指针ptr指向的值: %d\n", *ptr);
    printf("指针ptr的地址:%p\n",&ptr);
    printf("双重指针doubleptr指向的值:%d\n",*doubleptr);
    return 0;
}