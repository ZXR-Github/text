#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()     //������봦��
//{
//	int a[10];
//	int x,u,i;
//	for ( i = 0; i < 9; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	/*a[9] = 0;*/
//	scanf("%d", &x);
//	for (int i = 0; i < 10; i++)
//	{
//		if (x <= a[i])
//		{
//			u = i+1;
//			break;
//		}
//	}
//	for (int i = 9; i > u; i--)
//		{
//			a[i] = a[i - 1];
//		}
//		a[i] = x;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	return 0;
//}


//int main()    //�����������
//{
//	int a[10],i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}



//int gcd(int a, int b) {
//	if (b == 0)
//	{
//		return a;
//	}
//	else
//	{
//		return gcd(b,a%b);
//	}
//}
//
//int lcm(int a, int b)
//{
//	return a / gcd(a, b) * b;
//}
//
//int main()    //�Զ��庯���������Լ������С������
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", gcd(a, b), lcm(a, b));
//	return 0;
//}