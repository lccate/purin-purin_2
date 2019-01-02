//文件名：pointer3
//作  者：ccate
//时  间：2018.12
//描  述：三级指针（多级指针）
//原则：能用低级指针的尽量不要用高级指针，一级指针二级指针最常用，三级指针很少

#include<stdio.h>

int main()
{
	int a = 0;
	int *p = &a;
	int **pp = &p;
	int ***ppp = &pp;//三级指针
	int ****pppp = &ppp;
	int *****ppppp = &pppp;//五级指针

	*****ppppp = 10;//通过五级指针改变a的值
	printf("a = %d\n",a);//a = 10;
	return 0;
}