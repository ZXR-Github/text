#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//int main() {       //�Զ��庯����һԪ���η���
//	int a, b, c;
//	double d=0.0;
//	double x1, x2;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("\n");
//	d = b * b - 4.0 * a * c;
//	if (d < 0)
//	{
//		printf("�����޸�");
//	}
//	if(d==0)
//	{
//		x1 = - b /(2.0*a);
//		x2 = sqrt(d) / (2.0 * a);
//		printf("x1=%.3lf+%.3lf x2=%.3lf+%.3lf", x1, x2,x1,x2);
//	}
//	if (d > 0)
//	{
//		x1 = -b / (2.0 * a);
//		x2 = sqrt(d) / (2.0 * a);
//		printf("x1=%.3lf+%.3lf x2=%.3lf-%.3lf", x1, x2,x1,x2);
//	}
//	return 0;
//}

//int main()  //�Զ��庯����������
//{
//	int a,flag=0;
//	scanf("%d", &a);
//	for (int i = 2; i < a; i++)
//	{
//		if (a % i == 0)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 1)
//		printf("not prime");
//	else
//		printf("prime");
//	return 0;
//}

int main()     //��ά�����ת��
{
	int a[3][3] = { 0 };
	int x = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)       //++��д�ڱ���֮�󣬱�ʾʹ�ñ���֮���������������д�ڱ���֮ǰ����ʾ��ʹ�ñ�����Ȼ��������
		{
			if (i <= j)
			{
				x = a[j][i];
				a[j][i] = a[i][j];
				a[i][j] = x;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}