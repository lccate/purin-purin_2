//文件名：def_pointer2
//作  者：ccate
//时  间：2018.12
//描  述：指针占用内存的说明

#include <stdio.h>

int main02()
{
	char *p;
	int *p1;
	long long *p2;
	printf("%lu,%lu,%lu", sizeof(p),sizeof(p1),sizeof(p2));//结果：4，4，4

	return 0;
}