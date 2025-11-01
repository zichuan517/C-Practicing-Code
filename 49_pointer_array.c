#include <stdio.h>
int main(){
    double sum = 0;
    double num1,num2,num3;
    scanf("%lf%lf%lf",&num1,&num2,&num3);
    double* p[3] = {&num1, &num2 ,&num3};
    for (int i=0; i<3; i++){
        sum += *p[i];
    }
    printf("%.2f",sum);
    return 0;
}