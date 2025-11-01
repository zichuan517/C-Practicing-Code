#include <stdio.h>
int main(){
    // The elements in an array are stored continuously in memory.
    // The arithmetic step size of a pointer is determined by the size of the data type it points to.
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int (*p)[3] = arr;

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d",*(*(p+i)+j));
        }
    }
    
    return 0;
}