#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d\n", *p );
//		p++;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[][4] = { { 1, 2 }, { 1, 3 } };
//	return 0;
//}
//int farm(int n)
//{
//	if (n > 0)
//	{
//		return 2*(farm(n - 1)+1);
//	}
//	else
//	{
//		return 2;
//	}
//}
//
//int sale(int n)
//{
//		return farm(8 - n) / 2 + 1;
//}
//int main()
//{
//	int n = 7;
//	int num = 7;
//	farm(n);
//	printf("%d\n", farm(n));
//	printf("%d\n", sale(num));
//	return 0;
//}