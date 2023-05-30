#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<malloc.h>

typedef struct stu
{
	int sno;
	int sg;
	struct stu* next;
}*node,Node;

//����������
node create(int n)
{
	node h;
	h = (node)malloc(sizeof(Node));
	h->next = NULL;
	node q = h;
	node p;
	for (int i = 0; i < n; i++)
	{
		p = (node)malloc(sizeof(Node));
		scanf("%d%d", &(*p).sno, &(*p).sg);
		p->next = q->next;
		q->next = p;
		q = p;
	}
	return (h);
}
//�������
void  output(node l)
{
	l = l->next;
	node p;
	if (l != NULL)
	{
		printf("%d %d\n", l->sno, l->sg);
		p = l;
		l = l->next;
		free(p);
	}
}
//�ϲ�����
void sort(node h1, node h2)
{
	node q = h1;
	h2 = h2->next; 
	while (q->next != NULL)
	{
		q = q->next;
	}
	q->next = h2;
	q = h1->next;
	node min;//ָ����Сֵ����ָ��
	int t;//t���������ѧ��
	int n, g;
	node p;
	while (q != NULL)
	{
		p = q;
		t = p->sno;
		min = p;
		while (p != NULL)
		{
			if (p->sno < t)
			{
				min = p;
				t = p->sno;
			}
			p = p->next;
		}
		n = q->sno;
		q->sno = min->sno;
		min->sno = n;
		g = q->sg;
		q->sg = min->sg;
		min->sg = g;
		q = q->next;
	}
	output(h1);
}


int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	//����������
	node h1=create(n);
	node h2 = create(m);
	sort(h1, h2);
	return 0;
}