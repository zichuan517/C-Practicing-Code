#include <stdio.h>
int main(){
    int num_1 = 5;
    int num_2 = 10;
    printf("交换前:num_1=%d,num_2=%d\n",num_1,num_2);    
    int* prt_1 = &num_1;
    int* prt_2 = &num_2;    
    int t=0;
    t = *prt_1;
    *prt_1 = *prt_2;
    *prt_2 = t;
    printf("交换后:num_1=%d,num_2=%d\n",num_1,num_2);
    return 0;
}