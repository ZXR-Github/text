#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int main()    //��Ŀ 1073: �ܵܵ���ҵ
//{
//	int a, b, c, k;
//	int count = 0;
//	char op;
//	while( (k=scanf("%d%c%d=%d", &a, &op, &b, &c))!=EOF)   //scanf����ֵΪ0����ʾ������������ƥ�䣻-1��ʾ��������������������ʾ����������
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


//int main()     //��Ŀ 1074: ��������
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

int main()     //��Ŀ 1093: �ַ�����
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