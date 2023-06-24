#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>

//int main()     //题目 1112: C语言考试练习题_一元二次方程
//{
//	int a, b, c;
//	double x, y,i,j;
//	scanf("%d%d%d", &a, &b, &c);
//	i = sqrt(b * b - 4 * a * c);
//	x = (- b + i) /( 2.0 * a);
//	y = (-b - i) /( 2.0 * a);
//	printf("%.2f %.2f", x, y);
//	return 0;
//}


//int main()    //题目 1113: C语言考试练习题_保留字母
//{
//	char s[100] = { 0 };
//	scanf("%s", &s);
//	int length=strlen(s);
//	for (int i = 0; i < length; i++)
//	{
//		if ((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
//		{
//			printf("%c", s[i]);
//		}
//	}
//	return 0;
//}


int main()
{
	int a[4]={0};
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int n = 3; n <= 6; n++)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				for (int k = 0; k < 4; k++)
				{
					if ((i + j + k == n) && i != j && i != k && j != k)
					{
						printf("%d %d %d\n", a[i], a[j], a[k]);
						break;
					}
				}
			}
		}
	}
}


