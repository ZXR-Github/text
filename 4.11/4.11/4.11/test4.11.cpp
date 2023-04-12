#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()            //完数的判断
//{
//	int n;
//	int a[1000] = { 0 };
//	scanf("%d", &n);
//	for (int i = 1;i <= n;i++)
//	{
//      int k=0,sum=0;
//		for (int j = 1;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				sum += j;	
//				a[k++] = j;
//			}
//		}
//		if (sum == i)
//		{
//			printf("%d its factors are ", i);
//			for (int l = 0;l < k;l++)
//			{
//				printf(" %d", a[l]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//double a(int n) {
//	if (n == 1)
//		return 1.00;
//	else if (n == 2)
//		return 2.00;
//	else
//		return a(n - 1) + a(n - 2);
//}
//
//int main()    //有规律的数列求和
//{
//	int n;
//	scanf("%d", &n);
//	double sum = 0.00;
//	for (int i = 1;i <= n;i++)
//	{
//		sum += a(i+1)/a(i);
//	}
//	printf("%.2lf",sum);
//	return 0;
//}


int main() {          //自由下落的距离计算
	int i, n;       
	double sum = 0.00,height;
	scanf("%lf %d", &height, &n);
	sum = height;
	for (i = 1;i <= n;i++)
	{
		height = height / 2.0;
		sum += 2 * height;
	}
	sum -= 2*height;
	printf("%0.2lf %0.2lf", height, sum);
	return 0;
}