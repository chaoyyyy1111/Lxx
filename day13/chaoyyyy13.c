#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
//int main()
//{
//	int n = 20;
//	int ret = n;
//	while (n >= 2)
//	{
//		ret += n / 2 ;
//		n = n / 2 + n % 2;
//	}
//	printf("%d", ret);
//	return 0;
//}
//void Reverse(char* str)
//{
//	int len = strlen(str)-1;
//	char* start = str;
//	char* end = str + len;
//	while (start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//}
//int main()
//{
//	char arr[10] = "hello";
//	Reverse(arr);
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a,&n);
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int ret = 1;
//		for (int j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		int sum = 0;
//		int count = 1;
//		int tmp = i;
//		while (tmp/=10)
//		{
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * (line-1-i) -1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	int* p = &a;
//	int** pp = &p;
//	**pp = 30;
//	printf("%d", **pp);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int* arr[4] = { &a, &b, &c, &d };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d", *(arr[i]));
//	}
//	return 0;
//}
//typedef struct Date
//{
//	int year;
//	int month;
//	int day;
//}Date;
//typedef struct Student
//{
//	char name[10];
//	int age;
//	char id[20];
//	Date birthday;
//	int* p;
//}Stu;
//void Print1(Stu p)
//{
//	printf("%s\t%d\t%s\t%d\n", p.name, p.age, p.id, p.birthday.year);
//}
//void Print2(Stu* ps)
//{
//	printf("%s\t%d\t%s\t%d", ps->name, ps->age, ps->id, ps->birthday.year);
//}
//int main()
//{
//	int a = 2;
//	Stu s = { "ÕÅÈý", 18, "12323232", { 1992, 3, 2 }, &a };
//	Stu* ps=&s;
//	/*printf("%s\n",s.name);
//	printf("%s\n", (*ps).name);
//	printf("%s\n", ps->name);
//	printf("%d\n", s.birthday.day);
//	printf("%d\n", (*ps).birthday.day);
//	printf("%d\n", ps->birthday.day);
//	printf("%d\n", *(ps->p));*/
//	Print1(s);
//	Print2(ps);
//	return 0;
//}
