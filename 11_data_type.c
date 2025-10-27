/*
1.int:     4B   32bit         1符号位         -2^(-31)~2^32-1
2.char:    1B   8bit          256个
char gender_1 = 'M';
char gender_2 = 'F';
printf("性别男：%c\n性别2：%c\n",gender_1,gender_2);//变量顺序要对应字符串里占位符的先后顺序
Conment：
1.各个数字类型的实际长度，取决于编译器和运行平台，sizeof（数据类型名）获取某个数据在当前平台的长度。
2.%zu 是 printf() 和 scanf() 系列函数中用于格式化输入输出的一个格式说明符，专门用于处理 size_t 类型的数据。
3.char类型可以被数字赋值，范围是-128~127
*/
#include <stdio.h>
int main()
{
	char x = 'A';
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(short int));
	printf("%zu\n", sizeof(long int)); 
	printf("%zu\n", sizeof(long long int));
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(double));
	printf("%zu\n", sizeof(long double));
	printf("%zu\n", sizeof(char));
	printf("%c,%d\n", x, x);
	return 0;
}