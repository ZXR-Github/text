#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h> //memsetͷ�ļ�

//int main()   //��Ŀ 1118: Tom��
//{
//	unsigned int n=0,m=0,sum=0;//nΪ�̣�mΪ������sumΪ����
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


//int main() {  //��Ŀ 1098: ����ժƻ��
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


int main()   //��Ŀ 1099: У�������
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
//    int l, m, road[10001], a, b, i, count;    //road����״̬��countͳ��ʣ����������� 
//    while (scanf("%d %d", &l, &m) != EOF) {    //�������� 
//        count = 0;    //��ʼ�� 
//        memset(road, 0, sizeof(road));
//        for (i = 0; i < m; i++) {
//            scanf("%d %d", &a, &b);
//            memset(road + a, 1, sizeof(int) * (b - a + 1));    //��road+aλ�ã�road[a]����ʼ��b-a+1��int��С�ڴ��е�ֵ��Ϊ1
//        }
//        for (int i = 0; i <= l; i++) {    //ͳ�� 
//            if (!road[i]) {
//                count++;
//            }
//        }
//        printf("%d\n", count);
//    }
//}