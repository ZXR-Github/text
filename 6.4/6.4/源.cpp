#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>

//int main()    //��Ŀ 1062: ����C����-��Լ����
//{
//	int n, m,t=0,r,a,b;//t���м����,rΪ����
//	scanf("%d%d", &a, &b);
//	n = a;
//	m = b;
//	//n��Ŵ�ֵ��m���Сֵ
//	if (n < m)
//	{
//		t = n;
//		n = m;
//		m = t;
//	}
//	//շת�����
//	r = n % m;
//	while (r!=0)
//	{
//		n = m;
//		m = r;
//		r = n % m;
//	}
//	printf("%d\n", m);
//	printf("%d\n", a*b/m);
//	return 0;
//}


//int main()   //��Ŀ 1063: ����C����-ͳ���ַ�
//{
//	char a[100];
//	int e = 0, t = 0, n = 0, m = 0;
//	scanf("%[^\n]", &a);
//	int length = strlen(a);
//	for (int i = 0; i < length; i++)
//	{
//		//��ĸ
//		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
//		{
//			e++;
//		}
//		//����
//		else if (a[i] >= '0' && a[i] <= '9')
//		{
//			t++;
//		}
//		//�ո�
//		else if (a[i] == ' ')
//		{
//			n++;
//		}
//		//����
//		else
//		{
//			m++;
//		}
//	}
//	printf("%d\n", e);
//	printf("%d\n", n);
//	printf("%d\n", t);
//	printf("%d\n", m);
//	return 0;
//}

//int main()   //��Ŀ 1064: ����C����-�׳�����
//{
//	//aΪĳһ�׵�ֵ
//	double sum = 0, a = 1;
//	for (int i = 1; i <= 30; i++)
//	{
//		a=a*i;
//		sum =sum+ a;
//	}
//	printf("%.2e\n", sum);
//	return 0;
//}

//int main()         //��Ŀ 1065: ����C����-��С����ֵ
//{
//	int a[10]={0}, t, n, m,b;//n��¼��Сֵ��λ��
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	t = abs(a[0]);
//	for (int i = 1; i < 10; i++)
//	{
//		b = abs(a[i]);
//		if (b < t)
//		{
//			t = b;
//			n = i;
//		}
//	}
//	m = a[9];
//	a[9] = a[n];
//	a[n] = m;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//double fact(int n)
//{
//	double  a = 1.0;
//	for (int i = 1; i <= n; i++)
//	{
//		a=a*i;
//	}
//	return a;
//}
//double mypow(double x, int n)
//{
//	double sum=1;
//	for (int i = 1; i <= n; i++)
//	{
//		sum = sum * x;
//	}
//	return sum;
//}
//int main()  //��Ŀ 1066: ����C����-�Զ��庯��
//{
//	double x,sum=0;
//	int n;
//	scanf("%lf%d", &x,&n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum = sum -  mypow(x, i)/fact(i)  ;
//		}
//		else
//		{
//			sum = sum + mypow(x, i) / fact(i);
//		}
//	}
//	printf("%.4f", sum);
//	return 0;
//}
//
//int main()   //��Ŀ 1067: ����C����-�ֶκ���
//{
//	int x;
//	float y;
//	scanf("%d", &x);
//	if (x < 0)
//	{
//		y = fabs(x);
//	}
//	else if (x >= 0 && x < 2)
//	{
//		y = sqrt(x + 1);
//	}
//	else if (x >= 2 && x < 4)
//	{
//		y = pow(x + 2, 5);
//	}
//	else
//		y = 2 * x + 5;
//	printf("%.2f", y);
//	return 0;
//}

//int ctof(int i)
//{
//	int f;
//	f = 32 + i * 9 / 5;
//	return f;
//}
//int main()      //��Ŀ 1068: ����C����-�¶�ת��
//{
//	int f;
//	for (int i = -100; i <= 150; i=i + 5)
//	{
//		f = ctof(i);
//		printf("c=%d->f=%d\n", i, f);
//	}
//	return 0;
//}

//int main()  //��Ŀ 1069: ����C����-Ѱ�Ҿ�����ֵ
//{
//	int n,a[6][6]={0};
//	int t, r, l,b;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	t = fabs(a[0][0]);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			b = fabs(a[i][j]);
//			if (b > t);
//			t = b;
//			r = i;
//			l = j;
//		}
//	}
//	printf("%d %d %d", a[r][l], r+1, l+1);
//	return 0;
//}

//int main()   //��Ŀ 1070: ����C����-�ɼ�����
//{
//	int a;
//	int n=0, m=0, k=0;
//	while (scanf("%d", &a) > 0)
//	{
//		if (a > 85)
//			n++;
//		else if (a < 60)
//			k++;
//		else if(a>=60&&a<=84)
//			m++;
//	}
//	printf(">=85:%d\n", n);
//	printf("60-84:%d\n", m);
//	printf("<60:%d\n", k-1);
//	return 0;
//}

double fact(int n)
{
	double a = 1,sum=0;
	for (int i = 1; i <= n; i++)
	{
		a = a * i;
		sum = sum + 1 / a;
	}
	return sum;
}
int main()     //��Ŀ 1071: ����C����-�׳˹�ʽ��ֵ
{
	int n;
	scanf("%d", &n);
	double sum = fact(n);
	printf("sum=%.5f", sum);
	return 0;
}