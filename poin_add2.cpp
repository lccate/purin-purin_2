//文件名：poin_add2
//作  者：ccate
//时  间：2018.12
//描  述：指针运算2

#include<stdio.h>

int main()
{
	int a[10] = { 0 };
	int *p1 = a;
	p1 += 5;
	*p1 = 1;
	p1 -= 2;
	*p1 = 3;
	//p1 *= 2;//混淆
	int i;
	for(i=0;i<10;i++)
	{
		printf("a[%d]=%d; ",i,a[i]);//结果：a[0]=0; a[1]=0; a[2]=0; a[3]=3; a[4]=0; a[5]=1; a[6]=0; a[7]=0; a[8]=0; a[9]=0;
	}

	return 0;
}