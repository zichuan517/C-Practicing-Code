#include <stdio.h>

int * get_array(void){
    static int arr[5] = {1,2,3,4,5};
    return arr;
}

int main(){
    int sum = 0;
    int *ptr = get_array();

    for (int i=0; i<5; i++){
        sum += *(ptr + i);
    }

    printf("%d",sum);
    return 0;
}