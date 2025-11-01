#include <stdio.h>
#include <stdlib.h>

int* return_var(){
    int* ptr = (int*)malloc(sizeof(int));
    if (ptr != NULL){
        *ptr = 10;
    }
    return ptr;
}

int main(){
    int* tr = return_var();
    if (tr != NULL){
        printf("the value in the dynamic memory allocation is %d\n", *tr);
        free(tr);
    }
    else{
        printf("fail to allocate a dynamic memory.\n");
    }
    return 0;
}