//文件名：poin_function
//作  者：ccate
//时  间：2019.1
//描  述：函数的参数作为指针变量

#include<stdio.h>

void swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main0006()
{
	int a = 1;
	int b = 2;
	swap(&a,&b);//c语言想通过函数内部修改实参的值，只能给函数实参传递实参的地址来间接修改实参的值
	printf("a=%d,b=%d\n",a,b);
	return 0;
}