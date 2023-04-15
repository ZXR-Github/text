#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define n 10

//int main()    //选择排序
//{
//	int arr[n];
//	int min=0,a=0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);    //"%d"后面不能出现空格，会产生超出范围报错
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		min = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[min] > arr[j])
//			{
//				min = j;
//			}
//		}
//		if (min != i)
//		{
//			a = arr[min];
//			arr[min] = arr[i];
//			arr[i] = a;
//		}
//			
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()    //矩阵对角线求和
{
	int arr[3][3]={0};
	int sum1=0, sum2=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == j)
				sum2 += arr[i][j];
			if (2 == i + j)
				sum1 += arr[i][j];
		}
	}
	/*for (int i = 2; i >= 0; i--)
	{
		for (int j = 0; j <= 2; j++)
		{
			sum1 += arr[i][i];
		}
	}
	for (int i = 0; i <= 2; i++)
	{
		sum2 += arr[i][i];
	}*/
	printf("%d %d", sum2, sum1);
	return 0;
}