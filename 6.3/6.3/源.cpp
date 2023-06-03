#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()    //题目 1055: 二级C语言-进制转换
//{
//	int n=0,m=0,a=0;
//	scanf("%d", &n);
//	a = n;
//	if (a % 8 > 7)
//	{
//		while ((a % 8) > 7)
//		{
//			a = a % 8;
//		}
//	}
//	else
//		a = a % 8;
//	m = n / 8 * 10 + a;
//	printf("%d", m);
//}

//int main()
//
//{
//
//    int a, b, i, j, c, sum;
//
//    sum = 0;
//
//    scanf("%d", &a);//输入一个十进制的数字
//
//    for (i = 0; a != 0; i++)//这里做一个循环，当a等于0的时候，循环结束，每次循环中，a就是a除以8的数
//
//    {//先将i设置成0，是后面算i次方时不用减1，直接使用i的值即可
//
//        j = a % 8;//j代表a除以8的余数
//
//        a = a / 8;//这里可以不停的改变a的值
//
//        b = j * pow(10, i);//第几次循环就将j乘10的第i次方，这是十进制转换成八进制的公式
//
//        sum = sum + b;//这里将每一次循环所得到的b的值加在一起
//
//    }
//
//    printf("%d", sum);//输出所得到的八进制的数
//
//    return 0;
//
//}

//int main()
//{
//	int n,a,b,sum=0,j;//a是余数,b是每趟运算的值,sum是当前运算的值
//	scanf("%d", &n);
//	for (int i = 0; n != 1; i++)
//	{
//		a = n % 8;
//		n = n / 8;
//		b = a * pow(10, i);
//		sum = sum + b;
//		j = i;
//	}
//	sum = sum + pow(10, j+1);
//	printf("%d", sum);
//}

//int main()   //题目 1056: 二级C语言-温度转换
//{
//	float f,c;
//	scanf("%f", &f);
//	c = (f - 32) * 5 / 9;
//	printf("%.2f", c);
//	return 0;
//}

//int main()   //题目 1057: 二级C语言-分段函数
//{
//	float x,y;
//	scanf("%f", &x);
//	if (x < 1)
//	{
//		y = x;
//	}
//	else if (x >= 10)
//	{
//		y = 3 * x - 11;
//	}
//	else
//		y = 2 * x - 1;
//	printf("%.2f", y);
//	return 0;
//}


//int main()        //题目 1058: 二级C语言-求偶数和
//{
//	int n,sum=0,a[20]={0},i=0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % 2 == 0)
//		{
//			sum += a[i];
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()       //题目 1059: 二级C语言-等差数列
//{
//	int a = 2, d = 3;
//	int n,b=0,sum=0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//	      b = a + (i - 1) * d;
//		  sum += b;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()   //题目 1060: 二级C语言-同因查找
//{
//	int i = 0;
//	for (i = 10; i < 1001; i++)
//	{
//		if ((i % 2 == 0) && (i % 3 == 0) && (i % 7 == 0))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()   //题目 1061: 二级C语言-计负均正
//{
//	int x,count=0;
//	float avg = 0, sum = 0;
//	for (int i = 0; i < 20; i++)
//	{
//		scanf("%d", &x);
//		if (x < 0)
//			count++;
//		else
//		{
//			sum += x;
//		}
//	}
//	avg = sum / (20 - count);
//	printf("%d\n", count);
//	printf("%.2f\n", avg);
//	return 0;
//}

