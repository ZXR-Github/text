#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int sc(int n, char* a, int m,char *b)
//{
//	
//	int c = 0;
//	for (int i = m - 1; i < n; i++)
//	{
//		b[c] = a[i];
//		c++;
//	}
//	return *b;
//}
//int main()    //题目 1048: [编程入门]自定义函数之字符串拷贝
//{
//	int n, m;
//	char a[100]={0};
//	char b[100] = { 0 };
//	scanf("%d", &n);
//	scanf("%s", &a);
//	scanf("%d", &m);
//	sc(n, a, m, b);
//	printf("%s", b);
//	return 0;
//}


struct time {          //生命结构体
	int year;          //年
	int month;         //月
	int day;           //日
}date;
int main()         //题目 1049: [编程入门]结构体之时间设计
{
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int sum=0;
	scanf("%d%d%d", &date.year, &date.month, &date.day);
	if ((date.year % 4 == 0) && (date.year % 100 == 0)||(date.year%400==0))
	{
		if (date.month > 1)
		{
			for (int i = 0; i < date.month - 1; i++)
			{
				sum += a[i];
			}
			sum = sum + date.day + 1;
		}
		else
		{
			for (int i = 0; i < date.month - 1; i++)
			{
				sum += a[i];
			}
			sum += date.day;
		}
	}
	else
	{
		for (int i = 0; i < date.month - 1; i++)
		{
			sum += a[i];
		}
		sum += date.day;
	}
	printf("%d", sum);
	return 0;
}