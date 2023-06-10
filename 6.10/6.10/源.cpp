#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int main()    //题目 1073: 弟弟的作业
//{
//	int a, b, c, k;
//	int count = 0;
//	char op;
//	while( (k=scanf("%d%c%d=%d", &a, &op, &b, &c))!=EOF)   //scanf返回值为0，表示输入的与参数不匹配；-1表示输入流结束；正整数表示输入参入个数
//	{                                              
//		if (k == 4)
//		{
//			if (op == '+' && c == a + b)
//				count++;
//			else if (op == '-' && c == a - b)
//				count++;
//		}
//		else
//			getchar();
//	}
//	printf("%d", count);
//	return 0;
//}


//int main()     //题目 1074: 数字整除
//{
//	char a[100] = { 0 };
//	int num = 0;
//	while(scanf("%s", a)!=EOF)
//	{
//		if (a[0] == '0')
//			break;
//		num = 0;
//		for (int i = 0; a[i] != '\0'; i++)
//		{
//			num = num * 10 + a[i] - '0';
//			num %= 17;
//		}
//		printf("%d\n", (num == 0));
//	}
//	return 0;
//}

int main()     //题目 1093: 字符逆序
{
	char a[100] = { 0 };
	scanf("%[^\n]", a);
	int length = strlen(a);
	for (int i = length-1; i >= 0; i--)
	{
		printf("%c", a[i]);
	}
	return 0;
}