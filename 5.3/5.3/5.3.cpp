#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
using namespace std;

//int main()             //��Ŀ 1046: [�������]�Զ��庯��֮���ֺ���
//{
//	int n, m,t;
//	int a[100] = { 0 },b[20] = {0};
//	scanf("%d", &n);  //n��¼���뼸����
//	for (int i = 0; i < n; i++)   //forѭ������n����
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &m);  //m��¼�ƶ�������
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

//int main() {         //��Ŀ 1046: [�������]�Զ��庯��֮���ֺ���
//	int n, m, t;
//	int a[100] = { 0 }, b[20] = { 0 };
//	scanf("%d", &n);  //n��¼���뼸����
//	for (int i = 0; i < n; i++)   //forѭ������n����
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &m);  //m��¼�ƶ�������
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

//int main()         //��Ŀ 1047: [�������]��������
//{
//	/*int n;*/
//	/*scanf("%d", &n);*/
//        int n, m, s = 0; scanf("%d", &n);
//        bool visit[200] = { 0 };//visit����ʼֵ
//        for (int k = 0; k < n; k++)
//        {//�ܹ�Ҫ����n��
//            for (int i = 0; i < 3; i++) { 
//                if (++s > n)s = 1;
//                if (visit[s])i--; }//����ȡģ������Ϊ�����Ǵ�1��ʼ�ģ����Բ�ȡģ�����жϣ���visit������i--��ʹ�����ѭ��
//            visit[s] = true;//�������¼�ѳ���
//        }
//        printf("%d ", s);
//        return 0;
//    
//}

int main()         //��Ŀ 1047: [�������]��������
{
	int n;         //��ʼ����
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