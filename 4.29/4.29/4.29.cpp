#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()    //题目 1042: [编程入门]电报加密
//{
//	char a[100];       //出现超出数组大小的字符串
//	//scanf("%[^\n]", &a);
//	fgets(a,100,stdin);
//	int length = strlen(a);
//	for (int i = 0; i < length; i++)
//	{
//		/*if (a[i] >= 'a' && a[i] <= 'z')
//		{
//			if (a[i] == 'z')
//				a[i] = 'a';
//			else
//				a[i] = a[i] + 1;
//		}
//		if (a[i] >= 'A' && a[i] <= 'Z')
//		{
//			if (a[i] == 'Z')
//				a[i] = 'A';
//			else
//				a[i] = a[i] + 1;
//		}*/
//		if (a[i] >= 'a' && a[i] <= 'z')
//			a[i] = (a[i] - 'a' + 1) % 26 + 'a';
//		else if (a[i] >= 'A' && a[i] <= 'Z')
//			a[i] = (a[i] - 'A' + 1) % 26 + 'A';
//	}
//	printf("%s", a);
//	/*puts(a);*/
//	return 0;
//}


//int main() {      //题目 1043: [编程入门]三个数字的排序               //冒泡、三目
//	int a, b, c,t;
//	int min;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		t = b;
//		b = a;
//		a = t;
//	}
//	if (c > a && c < b)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	else if(c<a)
//	{
//		t = b;
//		b = a;
//		a = c;
//		c = t;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


int main()     //题目 1044: [编程入门]三个字符串的排序
{
	char a[100] = { 0 }, b[100] = { 0 }, c[100] = { 0 };
    char x[3];
    int i;
	scanf("%s", &a);
	scanf("%s", &b);
	scanf("%s", &c);

    if (strcmp(a, b) > 0 && strcmp(a, c) > 0)
    {
        x[2] = 'a';
        if (strcmp(b, c) > 0)
        {
            x[1] = 'b';
            x[0] = 'c';
        }
        else {
            x[1] = 'c';
            x[0] = 'b';
        }
    }
    else if (strcmp(b, a) > 0 && strcmp(b, c) > 0) {
        x[2] = 'b';
        if (strcmp(a, c) > 0)
        {
            x[1] = 'a';
            x[0] = 'c';
        }
        else {
            x[1] = 'c';
            x[0] = 'a';
        }
    }
    else {
        x[2] = 'c';
        if (strcmp(a, b) > 0)
        {
            x[1] = 'a';
            x[0] = 'b';
        }
        else {
            x[1] = 'b';
            x[0] = 'a';
        }
    }
    for (i = 0; i < 3; i++)
    {
        switch (x[i])
        {
        case 'a':printf("%s\n", a);
            break;
        case 'b':printf("%s\n", b);
            break;
        case 'c':printf("%s\n", c);
            break;
        }
    }
    return 0;
}
	 
