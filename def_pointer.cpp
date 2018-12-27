//文件名：def_pointer
//作  者：ccate
//时  间：2018.12
//描  述：指针的定义

#include <stdio.h>

int main()
{
	int *p;//定义int型指针变量，名字为p，int型（可以执行int型地址）
	int a; //定义int型变量a
	a = 1;
	p = &a;//把a的内存地址赋值给p
	printf("%p\n",p);
	//00B7FB24 实际上a占了4个字节（地址编号），但是只输出第一个地址编号
	//64位系统下a占8个字节，这也是为什么32位系统下内存用的少，64位内存用的多
	return 0;
}