#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>

//struct mstudent {
//	char sno[4];
//	char sname[10];
//	int math;
//	int china;
//	int english;
//};
//void input(struct mstudent *l,int n)   //输入学生信息
//{
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s%s%d%d%d", l[i].sno, l[i].sname, l[i].math, l[i].china, l[i].english);
//	}
//}
//void print(struct mstudent *l,int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s,%s,%d,%d,%d", l[i].sno, l[i].sname, l[i].math, l[i].china, l[i].english);
//	}
//}
//int main()     //题目 1050: [编程入门]结构体之成绩记录
//{
//	int n;
//	scanf("%d", &n);
//	struct mstudent list[100];
//		input(list,n);
//		print(list,n);
//	return 0;
//}

//#include<stdio.h> 
//struct student
//{
//	char num[20];
//	char name[20];
//	int grade1;
//	int grade2;
//	int grade3;
//};
//void input(struct student st[], int N)
//{
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%s%s%d%d%d", &st[i].num, &st[i].name, &st[i].grade1, &st[i].grade2, &st[i].grade3);
//	}
//}
//void print(struct student st[], int N)
//{
//	for (int i = 0; i < N; i++)
//	{
//		printf("%s,%s,%d,%d,%d\n", st[i].num, st[i].name, st[i].grade1, st[i].grade2, st[i].grade3);
//	}
//}
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	struct student st[N];
//	input(st, N);                   //这里传递参数时，只用传递变量名
//	print(st, N);
//	return 0;
//}

//typedef struct _student_info_
//{
//    char s_id[16];        //学号
//    char s_name[32];      //姓名
//    int s_score[3];       //三科成绩
//}student_info;
//
//void input(student_info* L)
//{
//    scanf("%s %s %d %d %d", L->s_id, L->s_name, &(L->s_score[0]), &(L->s_score[1]), &(L->s_score[2]));
//}
//
//void print(student_info* L)
//{
//    printf("%s,%s,%d,%d,%d\n", L->s_id, L->s_name, L->s_score[0], L->s_score[1], L->s_score[2]);
//}
//
//int main()
//{
//    student_info* list;
//    int n = 0, i = 0;
//    scanf("%d", &n);
//    while (getchar() != '\n')
//        continue;
//
//    if (n > 0 && n < 100)
//        list = (student_info*)malloc(sizeof(student_info) * n);
//    else
//        return 0;
//    for (i = 0; i < n; i++)
//    {
//        input(&list[i]);
//        //一行一行获取，忽略一行多余的数据
//        while (getchar() != '\n')
//            continue;
//    }
//    for (i = 0; i < n; i++)
//    {
//        print(&list[i]);
//    }
//    free(list);
//    return 0;
//}

struct student
{
	char number[20];
	char name[20];
	int score1;
	int score2;
	int score3;
};
void input(struct student stu[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%s%s%d%d%d", &stu[i].number, &stu[i].name, &stu[i].score1, &stu[i].score2, &stu[i].score3);
	}
}
int main()    //题目 1051: [编程入门]结构体之成绩统计2
{
	int n,t=0,max;
	int st[100]={0};
	int sums1=0, sums2=0, sums3=0;
	scanf("%d", &n);
	struct student stu[100];
	input(stu, n);
	for (int i = 0; i < n; i++)
	{
		sums1 += stu[i].score1;
		sums2 += stu[i].score2;
		sums3 += stu[i].score3;
		st[i] = (stu[i].score1 + stu[i].score2 + stu[i].score3);
	}
	max = st[0];
	for (int i = 1; i < n; i++)
	{
		if (st[i] > max) {
			max = st[i];
			t = i;
		}	
	}
	printf("%d %d %d\n", sums1 / n, sums2/ n, sums3 / n);
	printf("%s %s %d %d %d",stu[t].number, stu[t].name, stu[t].score1, stu[t].score2, stu[t].score3 );
	return 0;
}