#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()    //题目 1084: 用筛法求之N内的素数
//{
//	int n;
//    scanf("%d", &n);
//	for (int i = 2; i <= 3; i++)
//	{
//		printf("%d\n", i);
//	}
//	for (int i = 4; i <= n; i++)
//	{
//		int flag = 1;
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				flag = 0;
//
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//int main()   //题目 1115: DNA
//{
//	int n, a, b;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d", &a, &b);
//		while (b--)
//		{
//			for (int j = 0; j < a - 1; j++) {
//				for (int k = 0; k < a; k++)
//				{
//					if (k == j||k+j==a-1)
//					{
//						printf("X");
//					}
//					else
//					{
//						printf(" ");
//					}
//				}
//				printf("\n");//数据之间空一行
//			}
//		}
//		for (int j = 0; j < a; j++)
//		{
//			if (j == 0 || j == a - 1)
//			{
//				printf("X");
//			}
//			else
//			{
//				printf(" ");
//			}
//
//		}
//		printf("\n");//数据之间空一行
//		printf("\n");//数据之间空一行
//	}
//	
//}


//int main()
//{
//    int i, j;
//    int a, b, n;
//    scanf("%d", &n);
//    while (n--) {
//        scanf("%d %d", &a, &b);
//        for (j = 0; j < a; j++) {//单独打印第一行
//            if (j == 0 || j == a - 1) {
//                printf("X");
//            }
//            else {
//                printf(" ");
//            }
//        }
//        printf("\n");
//        while (b--) {//需要重复b次
//            for (i = 1; i < a; i++) {
//                for (j = 0; j < a; j++) {
//                    if (i == j || i + j == a - 1) {//判断是否在对角线和副对角线上
//                        printf("X");
//                    }
//                    else {
//                        printf(" ");
//                    }
//                }
//                printf("\n");
//            }
//        }
//        printf("\n");//数据之间空一行
//    }
//
//    return 0;
//}



int main()
{
    int i;
    char a[30];
    int isip;
    while (scanf("%s", &a) != EOF) {//判断是否为EOF
        int b[3] = { 0 };
        isip = 1;
        int x = 0, y = 0, k = 0;//初始化
        for (i = 0; i < strlen(a); i++) {
            if (a[i] == '.') {//判断是否为.
                if (i == 0 || i == strlen(a) - 1) {
                    isip = 0;
                    break;
                }
                else
                {
                    k++;
                    if (y == 3) {//计数.前面的数字有多少
                        if (a[x + 0] > '2' || a[x + 1] > '5' || a[x + 2] > '5') {
                            isip = 0;
                            break;
                        }
                    }
                    x = i + 1;//将x变到.的下一位
                    y = 0;//等待下一位
                }
            }
            else
                if (a[i] < '0' || a[i]>'9') {//判断是否在这个范围内
                    isip = 0;
                    break;
                }
                else {
                    y++;//计数，数字位加1
                    if (y == 4) {
                        isip = 0;
                        break;
                    }
                }
        }
        if (k == 3 && isip == 1) {//如果点是3且isip是0则不变
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}