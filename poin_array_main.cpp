//文件名：poin_array_main
//作  者：ccate
//时  间：2019.1
//描  述：指针数组作为main函数的形参

#include<stdio.h>

//int main(int argv, char *args[])
int main(int argv, char **args)//args是一个指针数组char*，argc代表数组的成员数量
{
	int i;
	for(i=0;i<argv;i++)
	{
		printf("%s\n",args[i]);
	}
	return 0 ;
}