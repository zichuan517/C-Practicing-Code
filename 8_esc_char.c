#include <stdio.h>
int main()
{
	printf("she said \" OK \"\n");
	//引号转义符
	printf("she said\n \" you are the best!\"\n");
	//换行转义符
	printf("this is a \\\n");
	//\对自己做转义
	printf("城市\t景点\n");
	printf("武汉市\t长江大桥\n");
	printf("天津市\t盘山\n");
	printf("泰安市\t岱庙\n");

	printf("   *\n  ***\n *****\n*******");
	printf("\nThere is a\"double quoted\" text.And here is a backslash\\.\n");
	printf("Name\tAge\tCity\n");
	printf("John\t20\tNew York\n");
	printf("Alice\t22\tLondon\n");
	
	//用水平制表符\t（有tab的功效）来对齐每列的内容，光标横向移动到下一个制表位（一般间隔8个字符宽度）
	//    \b退格符，相当于按backspace删除键，使光标向左移动一位删除前一个字符
	//    \r回车符，不会换行，而是将光标移动到当前行的开头，之后打印的字符会覆盖之前打印的内容
	//    \a警报符
	//    \v垂直制表符

	return 0;
}