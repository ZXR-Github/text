#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>

//int main()    //自定义函数之字符串反转
//{
//	char a[100];
//	int l = 0,c,k=0;
//	/*while ((c = getchar()) != '\n')
//	{
//		a[l++] = c;
//		k += 1;
//	}*/
//	scanf("%s", &a);
//    k = strlen(a);
//    /*char * gets(a);
//	int length = strlen(a);*/
//	for (int i = k-1; i >= 0; i--)
//	{
//		printf("%c", a[i]);
//	}
//	return 0;
//}


//int main()  //自定义函数之字符串连接
//{
//	char a[50]={0}, b[50] = {0}, c[50] = { 0 };
//	scanf("%s", &a);
//	scanf("%s", &b);
//	printf("%s", strcat(a, b));
//}


//int main()  //自定义函数之字符提取
//{
//	char a[50] = { 0 }, b[50] = { 0 };
//	int c = 0;
//	scanf("%s", &a);
//	int length = strlen(a);
//	for (int i = 0; i < length; i++)
//	{
//		if ((a[i] == 'a') || (a[i] == 'e') || (a[i] == 'o') || (a[i] == 'i') || (a[i] == 'u'))
//		{
//			b[c++] = a[i];
//			printf("%c", a[i]);
//		}
//	}
//	return 0;
//}

//int put(int a)
//{
//	int x = a,y=0,z;
//	for (int i = 3; i >= 0; i--)
//	{
//		z = pow(10, i);
//		y=x/z;
//		x = x % z;
//		printf("%d ", y);
//	}
//	return 0;
//}
//int main()   //自定义函数之数字分离
//{
//	int a;
//	scanf("%d", &a);
//    put(a);
//	return 0;
//}


int type(char* a,int l,int *x,int *y,int *z,int *k)
{
	* x = 0;
	* y = 0;
	* z = 0;
    * k = 0;
	for (int i = 0; i < l; i++)
	{
		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
		{
			*x += 1;
		}
		else if (a[i] >='0' && a[i] <= '9')
		{
			*y += 1;
		}
		else if (a[i] == ' ')
		{
			*z += 1;
		}
		else
			*k += 1;
	}
	return 0;
}

int main()    //自定义函数之字符类型统计
{
	char a[100];
	int x, y, z, k;
	scanf("%[^\n]", &a);
	int length=strlen(a);
	type(a,length,&x,&y,&z,&k);
	printf("%d %d %d %d", x, y, z, k);
	return 0;
}

