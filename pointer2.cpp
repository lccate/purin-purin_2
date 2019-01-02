//文件名：pointer2
//作  者：ccate
//时  间：2018.12
//描  述：二级指针

#include<stdio.h>

//二级指针
int main0002()
{
	int a = 0;
	int *p = &a;
	int **pp;//二级指针，二级指针pp存放指针p的地址，
	pp = &p;
	//int **pp = &p;//前两句的结合体
	return 0;
}

//二级指针与数组
int main0003()
{
	int a[10];
	int *p = a;//p是指向数组a的指针
	p[0] = 0;
	p[1] = 2;
	int *b[10];//定义指针数组b
	int **p1 = b;//定义指向指针数组b的二级指针p1（不能用一级指针指向b）
	p1[0] = NULL;
	printf("%lu\n",sizeof(p1[0]));//运行结果：4
	return 0;
}