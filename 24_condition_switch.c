/*
switch的优势：
1.代码结构清晰，易于维护
2.执行效率高（编译器优化）
3.多值匹配方便
4.适合处理离散值的情况

if-else的优势：
1.灵活性更强
2.支持复杂条件表达式
3.适合范围判断和布尔逻辑
*/
#include <stdio.h>
int main()
{
    int month=10;
    switch(month){
        case 3:case 4:case 5:printf("spring\n");break;
        case 6:case 7:case 8:printf("summer\n");break;
        case 9:case 10:case 11:printf("autumn\n");break;
        case 12:case 1:case 2:printf("winter\n");break;
        default:printf("shit"); break;
    }
    return 0;
}