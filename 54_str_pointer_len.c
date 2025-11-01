#include <stdio.h>
#include <string.h>

int main(){
    char str_1[100];
    char str_2[100];
    char str_3[100];
    int len = 0;


    scanf("%s%s%s",str_1,str_2,str_3);
    char *ptr_arr[3] = {str_1,str_2,str_3};

    for (int i=0; i<3; i++){
        len = strlen(ptr_arr[i]);
        printf("%d:%d\n",i,len);
    }
    
    return 0;

}