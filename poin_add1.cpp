//文件名：poin_add1
//作  者：ccate
//时  间：2018.12
//描  述：指针运算-加一

#include<stdio.h>

int main07()
{
	int a = 0;
	int *p = &a;
	printf("%p,%p,%p\n",p,p+1,p+2);//结果：0118FCA4,0118FCA8,0118FCAC（加1操作加4个字节）

	char c = 0;
	char *p1 = &c;
	printf("%p,%p,%p\n",p1,p1+1,p1+2);//结果：0075F937,0075F938,0075F939

	return 0;
}