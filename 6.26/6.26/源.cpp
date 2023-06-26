#define _CRT_SECURE_NO_WARNINGS 1                                                                                     
#include<stdio.h>
#include<math.h>

//int main()   //题目 1119: C语言训练-"水仙花数"问题1
//{
//	int  n,count=0;
//	int i = 0;
//	int  a, b, c=0;
//	scanf("%d", &n);
//	a = n;
//	for (i = 2; i >= 0; i--)
//	{
//		b = pow(10, i);
//		c = a / b;
//		a = a % b;
//		count = count + pow(c, 3);
//	}
//	if (count == n)
//	{
//		printf("1");
//	}
//	else
//		printf("0");
//	return 0;
//}

//int main()   //题目 1120: C语言训练-"水仙花数"问题2
//{
//	int count = 0;
//	int i = 0;
//	int  a=0, b=0, c = 0;
//	for (int j = 100; j <= 999; j++)
//	{
//		a = j;
//		count = 0;
//		for (i = 2; i >= 0; i--)
//		{
//			b = pow(10, i);
//			c = a / b;
//			a = a % b;
//			count = count + pow(c, 3);
//		}
//		if (count == j)
//		{
//			printf("%d\n",j);
//		}
//	}
//	return 0;
//}


int main()   //题目 1121: C语言训练-8除不尽的数
{
	int a, b,c,d,e;
	int a1, b1, c1, d1, e1;
	for (int i = 1993; i < 1995; i++)
	{
		a =i /  8;
		a1 = i % 8;
		b = a / 8;
		b1 =a % 8;
		c = b / 8;
		c1 = b % 8;
		d = i / 17;
		d1 = i % 17;
		e = d / 17;
		e1 = d % 17;
		if (a1 == 1 && b1 == 1 && c1 == 7 && d1 == 4 && e1 == 15 && e == (2 * c))
		{
			printf("%d", i);
		}
	}
}