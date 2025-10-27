/*
位运算符
1.&与
2.|或
3.^异或
4.~取反
5.<<左移
6.>>右移
*/
#include <stdio.h>
int main()
{
	printf("%d\n", ((13<<2)|4)^15);
	printf("%d\n", ~(14 | 7) & 9);
	return 0;
}