#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#define maxv(a,b,c) a>b?(a>c?a:c):(b>c?b:c)

//#define LEAP_YEAR(y)  ((y%4==0)&&(y%100!=0)||(y%400==0))
//#define LEAP_YEAR(y)  ((y%4==0)&&(y%100!=0)||(y%400==0))?printf("L"):printf("N")

//#define s(a,b,c)   ((a+b+c)/2.0)
//#define area(s,a,b,c)  sqrt(s*(s-a)*(s-b)*(s-c))

//#define chang(a,b) a%b


//#define change(a,b)  t=a,a=b,b=t;
//
//int main()         //�������궨����ϰ
//{                             // #define ��ʶ�� �ַ���; ����#define m a*b;                
//	int a, b, t;
//	scanf("%d %d", &a, &b);
//	change(a, b);
//	printf("%d %d", a, b);
//	return 0;
//}


//int main()    //��Ŀ 1037: [�������]�궨�����ϰ
//{
//	int a, b,c;               // #define ����(�βα�) �ַ���; 
//	scanf("%d %d", &a, &b);
//	c=chang(a,b);
//	printf("%d", c);
//	return 0;
//}


//int main()         //��Ŀ 1038: [�������]�궨����ϰ֮���������
//{
//	double a, b, c;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	printf("%.3lf",area(s(a,b,c),a,b,c));
//	return 0;
//}

//int main() {      //��Ŀ 1039: [�������]�궨��֮�����ж�
//	int y;
//	scanf("%d", &y);
//	LEAP_YEAR(y);
//	if (LEAP_YEAR(y) == 1)
//		printf("L");
//	if (LEAP_YEAR(y) == 0)
//		printf("N");
//	return 0;
//}

//int main()    //��Ŀ 1040: [�������]ʵ���Ĵ�ӡ
//{
//	float a;
//	scanf("%f", &a);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%6.2f ", a);
//		}
//		printf("\n");
//	}
//	return 0;
//}

float max(int a,int b,int c) {
	int max=a;
	if (a < b)
		max = b;
	if (max < c)
		max = c;
	return max;
}
int main()    //��Ŀ 1041: [�������]�궨��֮�������
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%.3lf\n", max(a, b, c));
	printf("%.3lf", maxv(a, b, c));
	return 0;
}