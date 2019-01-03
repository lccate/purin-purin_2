//文件名：array_poin
//作  者：ccate
//时  间：2019.1
//描  述：当数组名作为函数形参时，c语言将数组名解析为指针

#include<stdio.h>

//void test(int a[10])
void test(int *a)//最常用最简单
//void test(int a[])
{
	printf("%lu\n",sizeof(a));//输出结果：4
	a[5] = 100;
}
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%lu\n",sizeof(a));//输出结果：40
	printf("----------------\n");
	test(a);

	int i;
	for(i=0;i<10;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
		/*结果：
		a[0]=1
		a[1]=2
		a[2]=3
		a[3]=4
		a[4]=5
		a[5]=100
		a[6]=7
		a[7]=8
		a[8]=9
		a[9]=10
		*/
	}
	return 0;
}