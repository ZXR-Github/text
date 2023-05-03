#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
using namespace std;

//int main()             //题目 1046: [编程入门]自定义函数之数字后移
//{
//	int n, m,t;
//	int a[100] = { 0 },b[20] = {0};
//	scanf("%d", &n);  //n记录输入几个数
//	for (int i = 0; i < n; i++)   //for循环输入n个数
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &m);  //m记录移动几个数
//	t = n - m;
//	for (int i = 0; i < m; i++)
//	{
//		b[i] = a[t];
//		t++;
//	}
//	for (int i = n-1; i > m-1; i--)
//	{
//		a[i] = a[i - m];
//	}
//	for (int i = 0; i < m; i++)
//	{
//		a[i] = b[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//int main() {         //题目 1046: [编程入门]自定义函数之数字后移
//	int n, m, t;
//	int a[100] = { 0 }, b[20] = { 0 };
//	scanf("%d", &n);  //n记录输入几个数
//	for (int i = 0; i < n; i++)   //for循环输入n个数
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &m);  //m记录移动几个数
//	for (int i = 0; i < n; i++)
//	{
//		b[(i + m) % n] = a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}

//int main()         //题目 1047: [编程入门]报数问题
//{
//	/*int n;*/
//	/*scanf("%d", &n);*/
//        int n, m, s = 0; scanf("%d", &n);
//        bool visit[200] = { 0 };//visit赋初始值
//        for (int k = 0; k < n; k++)
//        {//总共要出队n次
//            for (int i = 0; i < 3; i++) { 
//                if (++s > n)s = 1;
//                if (visit[s])i--; }//类似取模，而因为序列是从1开始的，所以不取模，加判断；若visit过，则i--，使其继续循环
//            visit[s] = true;//输出，记录已出队
//        }
//        printf("%d ", s);
//        return 0;
//    
//}

int main()         //题目 1047: [编程入门]报数问题
{
	int n;         //初始人数
	scanf("%d", &n);
	int cnt = 0, i = 0, k = 0,c=0;
	int a[100]={0},b[100]={0};
	while (cnt!=n)
	{
		i++;
		if (i > n)i = 1;
		if (a[i] == 0)
		{
			k++;
			if (k == 3)
			{
				a[i] = 1;
				cnt++;
				b[c] = i;
				c++;
				k = 0;
			}
		}
	}
	printf("%d", b[n-1]);
	return 0;
}