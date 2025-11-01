#include <stdio.h>
int main(){
    int arr[3]={1,2,3};
    int (*p)[3] = &arr;

    for (int i=0; i<3; i++){
        printf("arr[%d] = %d\n", i, (*p)[i]);
        // 优先级：[] > *
    }
    return 0;

}