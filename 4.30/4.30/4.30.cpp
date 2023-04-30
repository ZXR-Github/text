#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int input_x(int a[])
{
	for (int i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
	return 0;
}
int deal(int a[]) {
	int max=a[0], min=a[0], temp, maxj, minj;
	for (int i = 1; i < 10; i++)
	{
		if (min > a[i])
		{
			min = a[i];
			minj = i;
		}
	}
	for (int i = 1; i < 10; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			maxj = i;
		}
	}
	temp = a[0];
	a[0] = a[minj];
	a[minj] = temp;
	temp = a[9];
	a[9] = a[maxj];
	a[maxj] = temp;
	return 0;
}
int putout(int a[]) {
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
		return 0;
	}
}
int main()     //题目 1045: [编程入门]自定义函数之整数处理
{
	int a[10];
	input_x(a);
	deal(a);
	putout(a);
	return 0;
}