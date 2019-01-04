//文件名：poin_convert
//作  者：ccate
//时  间：2019.1
//描  述：利用指针对字符串进行倒置
//思  路：设两个指针，p和p1，p从头开始，p1从后开始，第一个字符与最后一个字符交换，第二个与倒数第二个，直到p>p1;
#include<stdio.h>
#include<string.h>

int main()
{
	char a[100] = "hello,world";
	char *p = a;
	int len = strlen(a);

	char *p1 = p;//等同于*p1 = a;
	p1 += len -1;
	if(p<p1)
	{
		char tmp = *p;//值交换
		*p = *p1;
		*p1 = tmp;
		p1--;//地址加1减1
		p++;
	}
	printf("%s\n",a);//%s字符串
	return 0;
}