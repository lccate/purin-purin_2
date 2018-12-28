//文件名：pointer_address
//作  者：ccate
//时  间：2018.12
//描  述：不同类型变量占用的内存大小

#include<stdio.h>

int main05()
{
	int a[10];
	printf("%p,%p,%p\n",a,&a[0],&a[1]);
	//输出结果：0135FCA0,0135FCA0,0135FCA4
	//a与&a[0]是一样的，&a[0]与&a[1]中间有0135FCA0、1、2、3，因为一个int型变量占4个内存（4个地址编号）

	char b[10];
	printf("%p,%p,%p\n",b,&b[0],&b[1]);
	//输出结果：0076FB24,0076FB24,0076FB25
	//一个char类型变量占一个内存（地址编号）

	long long c[10];
	printf("%p,%p,%p\n",c,&c[0],&c[1]);
	//输出结果：008FFC84,008FFC84,008FFC8C
	return 0;
}