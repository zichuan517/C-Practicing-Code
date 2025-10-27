/*
水仙花数（Narcissistic number）,也称为自幂数或阿姆斯特朗数：指一个n位数，其每个位上的数字的n次幂之和等于它本身
例如：153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153
*/
#include <stdio.h>
int main()
{
    int t, x, y, z;
    for(t = 100; t < 1000; t++) {
        x = t / 100;    
        y = t / 10 % 10;    
        z = t % 10;         
        if(t == x*x*x + y*y*y + z*z*z) {
            printf("%d\n", t);
        }
    }
    return 0;
}