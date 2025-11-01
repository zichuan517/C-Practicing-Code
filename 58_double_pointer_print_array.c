#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int* ptr_1 = arr;
    int** ptr_2 = &ptr_1;

    for (int i=0; i<5; i++){
        printf("%d ", *(*ptr_2+i));
    }
    return 0;
}