//文件名：def_pointer2
//作  者：ccate
//时  间：2018.12
//描  述：p与*p
//        通过指针变量间接访问变量的值
//        指针变量p在a和b之间指来指去
//        当指针类型与变量类型不相符时不能强制转换，会导致错误结果
//        void

#include <stdio.h>

int main01()
{
	int *p;
	int a;
	a = 1;
	p = &a;//把a的内存地址赋值给p

	*p = 10; //通过指针变量间接访问a的值，把a的值改为10
	printf("a = %d\n",a);
	printf("*p = %d\n",*p);

	a = 100;  //修改a的值时*p的值也会变化
	printf("a = %d\n",a);
	printf("*p = %d\n",*p);

	int b = 2; 
	p = &b;  //现在指针变量p指向了b（指来指去）
	*p = 50;
	printf("b = %d\n",b);
	printf("*p = %d\n",*p);

	a = 123456;
	//char *p1 = &a;//p1为char型指针变量，a为int型变量
	//char *p1 = (char*)&a;//强制转换会导致错误的结果

	void *p2 = &a;//void代表无类型，可以指向任何类型的地址  

	return 0;
}