#include <stdio.h>

typedef union MultiType{
    int i;
    float f;
    char ch;
}MultiType;

int main(){
    MultiType data;

    data.ch = 'A';
    printf("the char is: %c\n", data.ch);

    data.i = 70;
    printf("the char is %c\n",data.ch);
    printf("the int is %d\n", data.i);

    data.f = 12.34;
    printf("the int is: %d\n", data.i);
    printf("the float is %f", data.f);

    return 0;
}