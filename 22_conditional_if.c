#include <stdio.h>
#include <stdbool.h>  //标准布尔型头文件
int main()
{
    if (true)
    printf("everthing is allowed to print.\n");
    if (false)
    printf("nothing is allowed to print.\n");

    if (3)
    printf("num!=0 is equal to true and it doesn't need to include stdbool.h to generate this sentenc.\n");
    if (0)
    printf("0 is equal to flasee.\n");
    return 0;
}