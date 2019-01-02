//文件名：poin_2array
//作  者：ccate
//时  间：2018.12
//描  述：指针的灵活性——利用指针对多维数组进行排序

#include<stdio.h>

int main()
{
	char a[2][5] = {{3,4,1,2,9},{3,44,98,0,5}};//把二维数组"拉直"当成一维数组
	char *p =(char *)a;

	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(p[j]<p[j-1])
			{
				char tmp = p[j];
				p[j] = p[j-1];
				p[j-1] = tmp;
			}
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\n",a[i][j]);
		}
	}
	return 0;
}