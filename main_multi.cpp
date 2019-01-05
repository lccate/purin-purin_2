//文件名：main_multi
//作  者：ccate
//时  间：2019.1
//描  述：利用main实现四则加法运算,例如，命令行输入a 5 + 6 输出5+6的结果11

#include<stdio.h>
#include<stdlib.h>//atoi的头文件

int main(int argc, char **args)
{
	if (argc<4)//如果参数不足直接提示并退出
	{
		printf("参数不足\n");
		return 0;
	}
	//注意：main函数的参数都是字符串，没有char，中间的+是“+”而不是‘+’
	int a = atoi(args[1]);//把第一个参数5转化为int型
	int b = atoi(args[3]);//把第三个参数6转化为int型

	char *s = args[2];//+是字符串，因此不能写成下面一句
	//char c = args[2];
	char c = s[0];//+是“+”的第一个字符，可得到第二个参数+字符
	//以上两句建议合并为下面一句
	//char c = args[2][0];
	switch (c)
	{
	case '+':
		printf("%d\n",a+b);
	case '-':
		printf("%d\n",a-b);
	case '*':
		printf("%d\n",a*b);
	case '/':
		printf("%d\n",a/b);
	default:
		printf("error\n");
	}

	return 0;
}
//注意：*代表的是通配符，运算时结果是error，要想使用*运算符，加转移符号\
//如：a 1 \* 5