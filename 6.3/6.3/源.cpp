#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()    //��Ŀ 1055: ����C����-����ת��
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
//    scanf("%d", &a);//����һ��ʮ���Ƶ�����
//
//    for (i = 0; a != 0; i++)//������һ��ѭ������a����0��ʱ��ѭ��������ÿ��ѭ���У�a����a����8����
//
//    {//�Ƚ�i���ó�0���Ǻ�����i�η�ʱ���ü�1��ֱ��ʹ��i��ֵ����
//
//        j = a % 8;//j����a����8������
//
//        a = a / 8;//������Բ�ͣ�ĸı�a��ֵ
//
//        b = j * pow(10, i);//�ڼ���ѭ���ͽ�j��10�ĵ�i�η�������ʮ����ת���ɰ˽��ƵĹ�ʽ
//
//        sum = sum + b;//���ｫÿһ��ѭ�����õ���b��ֵ����һ��
//
//    }
//
//    printf("%d", sum);//������õ��İ˽��Ƶ���
//
//    return 0;
//
//}

//int main()
//{
//	int n,a,b,sum=0,j;//a������,b��ÿ�������ֵ,sum�ǵ�ǰ�����ֵ
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

//int main()   //��Ŀ 1056: ����C����-�¶�ת��
//{
//	float f,c;
//	scanf("%f", &f);
//	c = (f - 32) * 5 / 9;
//	printf("%.2f", c);
//	return 0;
//}

//int main()   //��Ŀ 1057: ����C����-�ֶκ���
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


//int main()        //��Ŀ 1058: ����C����-��ż����
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

//int main()       //��Ŀ 1059: ����C����-�Ȳ�����
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

//int main()   //��Ŀ 1060: ����C����-ͬ�����
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

//int main()   //��Ŀ 1061: ����C����-�Ƹ�����
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

