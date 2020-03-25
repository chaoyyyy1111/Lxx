#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
//int is_prime(int i)
//{
//	for (int j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d   ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//
//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 3;
//	int b = 4;
//	swap(&a, &b);
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//void mul(int k)
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= k; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int k = 0;
//	printf("请输入一个数字\n");
//	scanf("%d", &k);
//	mul(k);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "######";
//	char arr2[] = "bit";
//	printf("%s %s\n", arr1, arr2);
//	strcpy(arr1, arr2);
//	printf("%s %s\n", arr1, arr2);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "hello";
//	memset(arr1, '*', 3);
//	printf("%s", arr1);
//}
//int binary_search(int arr[], int k, int right)
//{
//	int left = 0;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 30;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, right);
//	printf("%d", ret);
//	return 0;
//	
//}
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int i = 1;
//	Add(&i);
//	printf("%d", i);
//	return 0;
//}
//#include "Add.h"
//#include "Sub.h"
//int main()
//{
//	int a = 20;
//	int b = 10;
//	printf("%d %d", Add(a, b), Sub(a, b));
//	return 0;
//}

