#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//void Print(int* p,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", p[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}
//char* Reverse(char* p)
//{
//	int left = 0;
//	int right = strlen(p) - 1;
//	while (left < right)
//	{
//		char tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		left++;
//		right--;
//	}
//	return p;
//}
//int main()
//{
//	char inputString[100] = { 0 };
//	gets(inputString);
//	Reverse(inputString);
//	printf("%s", inputString);
//}
//int Fun(int n)
//{
//	int ret = 0;
//	int sum = 0;
//	for (int i = 0; i < 5; i++,n*=10)
//	{
//		sum += n;
//		ret += sum;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fun(n));
//}
//int Digit(int i)
//{
//	int count = 1;
//	while (i > 9)
//	{
//		i = i / 10;
//		count++;
//	}
//	return count;
//}
//int Sum(i)
//{
//	int k = Digit(i);
//	int ret = 0;
//	int tmp = 0;
//	while (i != 0)
//	{
//		tmp = i % 10;
//		ret += pow(tmp, k);
//		i = i / 10;
//	}
//	return ret;
//}
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		if (i == Sum(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 0; i < 7; i++)
//	{
//		for (int j = 0; j < 7 - i; j++)
//		{
//			printf("%c", ' ');
//		}
//		for (int k = 0; k < 2*i+1; k++)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//	for (int i = 5; i >= 0; i--)
//	{
//		for (int j = 0; j < 7 - i; j++)
//		{
//			printf("%c", ' ');
//		}
//		for (int k = 0; k < 2 * i + 1; k++)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int Numberof1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2==1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int Numberof1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//		
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Numberof1(n));
//}
//int main()
//{
//	int arr[10] = { 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344,
//		0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344 };
//	int i = 0;
//	char* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//}
//int my_strlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "hello";
//	printf("%d", my_strlen(arr));
//	return 0;
//}
