#include <stdio.h>

int main(){

    char str_1[20] = "Hello";
    char str_2[20] = "World";
    char* ptr_1 = str_1;
    char** ptr_2 = &ptr_1;
    printf("before: %s\n", ptr_1);

    *ptr_2 = str_2;
    printf("after: %s\n", ptr_1);
    
    return 0;
}