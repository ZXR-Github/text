#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()     //���ӳ��ҵ�����
//{
//	int n,sum=1;//nΪ����,sumΪ��һ��ժ��������
//	scanf("%d", &n);
//	for (int i = 1;i< n;i++)
//	{
//		sum = (sum + 1) * 2;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//    int a;
//    double x = 1.0, x1=0;
//    scanf("%d", &a);
//    while (fabs(x - x1) > 1e-5)       //�жϽ�������
//    {
//        x1 = x;
//        x = (x1 + a / x1) / 2;
//    }
//    printf("%0.3lf", x);
//    return 0;
//}

int main() {           //ɸѡN���ڵ�����
	int n;
	scanf("%d", &n);
    for (int i = 2; i <= n; ++i) {
        bool isPrime = true;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                isPrime = false;
            }
        }
        if (isPrime) {
            printf("%d\n", i);
        }
    }
	return 0;
}