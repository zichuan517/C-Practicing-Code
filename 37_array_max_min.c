#include <stdio.h>
int main()
{
    int arr[5];
    printf("please enter 5 integer:\n");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for (int j=0;j<5;j++){
        if (max<arr[j])
        max=arr[j];
        if (min>arr[j])
        min=arr[j];
        printf("%d ",arr[j]);
    }
    printf("\n");
    printf("the max element of the array is %d\n",max);
    printf("the min element of the array is %d\n",min); 
    return 0;
}