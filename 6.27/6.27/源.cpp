#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()   //题目 1122: C语言训练-亲密数
//{
//	int sum1, sum2;
//	for (int i = 220; i < 2625; i++)
//	{
//		sum1 = 0;
//		for (int k = 1; k < i; k++)
//		{
//			if (i % k == 0)
//			{
//				sum1 = sum1 + k;
//			}
//		}
//		for (int j = 284; j < 2930; j++)
//		{
//			sum2 = 0;
//			for (int l = 1; l < j; l++)
//			{
//				if (j % l == 0)
//				{
//					sum2 = sum2 + l;
//				}
//			}
//			if (sum1 == j&&sum2==i&&i<j)
//			{
//				printf("(%d,%d)", i, j);
//			}
//		}
//	}
//}


//int main()
//{
//	int a, b = 0, i, num = 0;
//	for (a = 1; a < 3000; a++) {//来过滤3000以内的数 
//		num = 0;//新得一轮需要重置 
//		b = 0;
//		for (i = 1; i < a; i++) {//获取A因子的和
//			if (a % i == 0) {
//				b += i;
//			}
//		}//将得到的A因子的和b来获取b因子的和 
//		if (a > b) {
//			for (i = 1; i < b; i++) {
//				if (b % i == 0) {
//					num += i;
//				}
//			}
//		}
//		if (num == a && a != b) {//来判断b因子的和是否等于a,还要加上A与B不相等的条件 
//			printf("(%d,%d)", b, a);
//		}
//	}
//	return 0;
//}


//int main()  //题目 1123: C语言训练-列出最简真分数序列*
//{
//	for (int i = 1; i < 40; i++)
//	{
//		if(i%2!=0&& i % 5 != 0)
//		printf("%d/40,", i);
//	}
//}

int main()    //题目 1124: C语言训练-大、小写问题
{
	char s[100];
	scanf("%[^\n]", s);
	int length = strlen(s);
	for (int i = 0; i < length; i++)
	{
		if (s[i] <= 'Z' && s[i] >= 'A')
		{
			s[i] = s[i] + 32;
		}
	}
	printf("%s", s);
}