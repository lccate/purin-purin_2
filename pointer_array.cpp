//文件名：pointer_array
//作  者：ccate
//时  间：2018.12
//描  述：指针数组

#include<stdio.h>

int main0000()
{
	char *a[10];//定义指针数组a，每个成员是char*类型的，一共10个成员
	int *b[10];//定义指针数组b，每个成员是int*类型的，一共10个成员
	printf("%lu,%lu\n",sizeof(a),sizeof(b));//结果：40,40
	char i = 0;
	//a = &i;//a和b为数组名，数组名不能作为左值
	//b = &i;
	a[0] = &i;//合法
	printf("%lu,%lu\n",sizeof(a[0]),sizeof(*a[0]));//输出结果4,1
	return 0;
}

int main0001()
{
	int *b[10] = { NULL };
	int a,b1,c;
	b[0] = &a;
	b[1] = &b1;
	b[2] = &c;
	*b[0] = 10;
	printf("%d\n",a);
	return 0;
}