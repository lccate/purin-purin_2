//文件名：char_poin
//作  者：ccate
//时  间：2019.1
//描  述：数组作为函数的参数

#include<stdio.h>


//void test(char a[10])等价
//void test(char a[])
void print_array(int n,int *a)//提供另一个参数n表明数组的成员数量
{
	int i;
	for(i = 0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}

}
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};

	print_array(sizeof(a)/sizeof(a[0]),a);//n=sizeof(a)/sizeof(a[0])
	return 0;
}