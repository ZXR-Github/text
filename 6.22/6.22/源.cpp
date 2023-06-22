#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h> //memset头文件

//int main()   //题目 1118: Tom数
//{
//	unsigned int n=0,m=0,sum=0;//n为商，m为余数，sum为总数
//	while (scanf("%d", &n) != EOF)
//	{
//		m = 0;
//		sum = 0;
//		while (m != 10 * n)
//		{
//			m = n % 10;
//			n = n / 10;
//			sum += m;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}


//int main() {  //题目 1098: 陶陶摘苹果
//	int a[10]={0};
//	int n,count=0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &n);
//	for (int i = 0; i < 10; i++)
//	{
//		if (n >= a[i] || n + 30 >= a[i])
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


int main()   //题目 1099: 校门外的树
{
	int l, m,x,y,count,road[10001];
	while (scanf("%d%d", &l, &m) != EOF) {
		count = 0;
		memset(road, 0, sizeof(road));
		for (int i = 0; i < m; i++)
		{
			scanf("%d%d", &x, &y);
			memset(road + x, 1, sizeof(int) * (y - x + 1));
		}
		for (int i = 0; i <= l; i++)
		{
			if (road[i] == 0)
			{
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}

//int main(void) {
//    int l, m, road[10001], a, b, i, count;    //road树的状态，count统计剩余的树的数量 
//    while (scanf("%d %d", &l, &m) != EOF) {    //多组输入 
//        count = 0;    //初始化 
//        memset(road, 0, sizeof(road));
//        for (i = 0; i < m; i++) {
//            scanf("%d %d", &a, &b);
//            memset(road + a, 1, sizeof(int) * (b - a + 1));    //从road+a位置（road[a]）开始，b-a+1个int大小内存中的值置为1
//        }
//        for (int i = 0; i <= l; i++) {    //统计 
//            if (!road[i]) {
//                count++;
//            }
//        }
//        printf("%d\n", count);
//    }
//}