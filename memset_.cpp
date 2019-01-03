//文件名：memset
//作  者：ccate
//时  间：2019.1
//描  述：memset：将指定区域的内存置空（参数1：指定要置空内存的首地址；参数2:0；参数3：这块内存的大小，单位，字节）

#include<stdio.h>
#include<string.h>
int main0008()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	//a[10] = { 0 };//错误赋值方法，这种初始化的方法只能在创建a数组时才能用

	//如果要把数组a置空，需要遍历修改
	/*
	int i;
	for（i= 0;i<10;i++)
	{
		a[i] = 0;
	}
	*/

	//采用memset可以简化上述的代码,需要加string.h的头文件
	memset(a, 0, sizeof(a));
	//memset(a, 0 ,10);//错误，只会把前10个字节清空
	/*int *p = a;
	memset(a, 0 ,sizeof(p));错误，指针变量的大小是8或4，所以只会清空前两个或者前一个字节*/

	int i;
	for (i=0;i<10;i++)
	{
		printf("a[%d] = %d",i,a[i]);
	}
	return 0;
}
