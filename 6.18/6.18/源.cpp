#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()    //��Ŀ 1084: ��ɸ����֮N�ڵ�����
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


//int main()   //��Ŀ 1115: DNA
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
//				printf("\n");//����֮���һ��
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
//		printf("\n");//����֮���һ��
//		printf("\n");//����֮���һ��
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
//        for (j = 0; j < a; j++) {//������ӡ��һ��
//            if (j == 0 || j == a - 1) {
//                printf("X");
//            }
//            else {
//                printf(" ");
//            }
//        }
//        printf("\n");
//        while (b--) {//��Ҫ�ظ�b��
//            for (i = 1; i < a; i++) {
//                for (j = 0; j < a; j++) {
//                    if (i == j || i + j == a - 1) {//�ж��Ƿ��ڶԽ��ߺ͸��Խ�����
//                        printf("X");
//                    }
//                    else {
//                        printf(" ");
//                    }
//                }
//                printf("\n");
//            }
//        }
//        printf("\n");//����֮���һ��
//    }
//
//    return 0;
//}



int main()
{
    int i;
    char a[30];
    int isip;
    while (scanf("%s", &a) != EOF) {//�ж��Ƿ�ΪEOF
        int b[3] = { 0 };
        isip = 1;
        int x = 0, y = 0, k = 0;//��ʼ��
        for (i = 0; i < strlen(a); i++) {
            if (a[i] == '.') {//�ж��Ƿ�Ϊ.
                if (i == 0 || i == strlen(a) - 1) {
                    isip = 0;
                    break;
                }
                else
                {
                    k++;
                    if (y == 3) {//����.ǰ��������ж���
                        if (a[x + 0] > '2' || a[x + 1] > '5' || a[x + 2] > '5') {
                            isip = 0;
                            break;
                        }
                    }
                    x = i + 1;//��x�䵽.����һλ
                    y = 0;//�ȴ���һλ
                }
            }
            else
                if (a[i] < '0' || a[i]>'9') {//�ж��Ƿ��������Χ��
                    isip = 0;
                    break;
                }
                else {
                    y++;//����������λ��1
                    if (y == 4) {
                        isip = 0;
                        break;
                    }
                }
        }
        if (k == 3 && isip == 1) {//�������3��isip��0�򲻱�
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}