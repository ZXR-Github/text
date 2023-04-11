#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<math.h>


//int gcd(int a ,int b) {
//	return (a%b==0) ? b : gcd(b, a % b);
//}
//
//int main()
//{
//	//定义并输入两个数
//	int m, n;
//	//int gcd = 1;
//	scanf("%d %d", &m, &n);
//	
//	//
//////短除法
////for (int i = 2;i < m && i < n;i++)    //判断小于最小值的所有因数
////{
////	while (m % i == 0 && n % i == 0)    //在m,n有i共同因数
////	{
////		m /= i;
////		n /= i;
////		gcd *= i;
////	}
////}
////lcd = gcd * m * n;
////printf("%d %d", gcd, lcd);
//
//	//辗转相除法
//	int ans = gcd(m,n);
//	printf("%d %d\n", ans, m * n / ans);
//
//
//	return 0;
//}
//


////char* gets_s(char *str,int size);
//int main() {                                   //字符串分类统计
//	//定义一个数组，并传字符串给这个数组
//	char arr[200];
//	int m=0, n=0, a=0, b=0;
//	scanf("%[^\n]", &arr);
//	//gets_s(arr,50);
//	int s = strlen(arr);
//	for (int i = 0;i < s;i++)
//	{
//		if ((arr[i] <= 90 && arr[i] >= 65) || (arr[i] <= 122 && arr[i] >= 97))
//			m++;
//		else if (arr[i] <= 57 && arr[i] >= 48) 
//			n++;
//		else if (arr[i] ==32 )
//			a++;
//		else
//			b++;
//	}
//	printf("%d %d %d %d", m, n, a, b);
//	return 0;
//}


//int main()     //Sn的公式求和
//{
//	//输入n的值
//	int n,Sn=0;
//	scanf("%d", &n);
//	for (int i=0;i < n;i++)
//	{
//		for (int j = 0;j <= i;j++)
//		{
//			Sn = Sn + 2 * pow(10,j);
//		}
//	}
//	printf("%d", Sn);
//	return 0;
//}



//int factorial(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//	return n * factorial(n - 1);
//}
//
//
//int main()     //阶乘求和
//{
//	//输入n
//	int n, sum = 1,sn=0;
//	scanf("%d", &n);
//	for (int i = 1;i <= n;i++) {
//		sum = 1 * factorial(i);
//		sn = sn + sum;
//	}
//	printf("%d", sn);
//	return 0;
//}


//int main()      //求和训练
//{
//	int a, b, c;
//	int sum1 = 0, sum2 = 0;
//	double sum3 = 0.00, sum = 0.00;
//	scanf("%d %d %d", &a, &b, &c);
//	for (int i = 1;i <= a;i++)
//	{
//		sum1 = sum1 + i;
//	}
//	for (int j = 1;j <= b;j++)
//	{
//		sum2 = sum2 + j*j;
//	}
//	for (int k = 1;k <= c;k++)
//	{
//		sum3 = sum3 + 1.0/k;
//	}
//	sum = sum1 + sum2 + sum3;
//	printf("%.2lf", sum);
//	return 0;
//}


int main()
{
	/*int n=0,m=0;
	for (int i = 1;i < 10;i++)
	{
		for (int j = 1;i < 10;j++) 
		{
			for (int k = 1;k < 10;k++)
			{
				n = i * 100 + j * 10 + k;
				m = pow(i,3) + pow(j, 3) + pow(k, 3);
				if (n == m)
					printf("%d\n", n);
			}
		}
	}*/
	int a, b, c;
	for (int i = 100;i < 1000;i++)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		if (i == (pow(a, 3) + pow(b, 3) + pow(c, 3)))
			printf("%d\n", i);
	}
	return 0;
}