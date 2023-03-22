#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {                                        //题目 1001: [编程入门]第一个HelloWorld程序
//	char arr2[13] = "Hello World!";
//	char arr1[27] = "**************************";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr1);
//}


//int main() {                              题目 1002: [编程入门]三个数最大值
//	int a, b, c,x;
//	while (scanf("%d %d %d", &a, &b, &c) != 0)
//	{
//		if (a < b)
//			x = a;
//		    a = b;
//		    b = x;
//		if (a < c)
//			x = a;
//			a = c;
//			c = x;
//			printf("%d", a);
//	}
//}

//int main() {                    //题目 1003: [编程入门]密码破译
//	char arr[10];
//	int i = 0,length=0;
//	/*for (i = 0;i < 5;i++)
//	{
//		scanf("%c", &arr[i]);
//	}*/
//	scanf("%s", arr);
//	length = strlen(arr);
//	for (i = 0;i < length;i++)
//	{
//		printf("%c", arr[i] + 4);
//	}
//}

//int fun(int n)                        //题目 1004: [递归]母牛的故事
//{
//	if (n <= 4)
//		return n;
//	else
//		return fun(n - 1) + fun(n - 3);
//}
//
//int main() {
//
//	int n = 0;
//	scanf("%d", &n);
//	fun(n);
//	printf("%d", fun(n));
//		
//}

//int main() {                //题解 1005: [编程入门]温度转换
//	float F;
//	double c;
//	scanf("%f", &F);
//	c = 5*(F - 32) / 9;
//	printf("c=%0.2lf", c);
//}

//int main() {                     //题目 1006: [编程入门]三个数找最大值
//	int a, b, c, max;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	if (c > max)
//		max = c;
//	printf("%d", max);
//}

//int main() {                 //题目 1007: [编程入门]分段函数求值
//	int a, b;
//	scanf("%d", &a);
//	if (a < 1)
//		b = a;
//	else if (a > +10)
//	{
//		b = 3 * a - 11;
//	}
//	else
//		b = 2 * a - 1;
//	printf("%d", b);
//}

//int main()               //题目 1008: [编程入门]成绩评定
//{
//	int a;
//	scanf("%d", &a);
//	/*if (a < 60)
//		printf("E");
//	if (a < 70 && a >= 60)
//		printf("D");
//	if (a < 80 && a >= 70)
//		printf("C");
//	if (a < 90&&a>=80)
//		printf("B");
//	if (a >= 90)
//		printf("A");*/
//	switch (a / 10) {
//	case 10:
//	case 9:
//		putchar('A');
//		break;
//	case 8:
//		putchar('B');
//		break;
//	case 7:
//		putchar('C');
//		break;
//	case 6:
//		putchar('D');
//		break;
//	default:
//		putchar('E');
//		break;
//	}
//}

