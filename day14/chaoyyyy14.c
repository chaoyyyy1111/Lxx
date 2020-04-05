#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[10] = "hello";
//	printf("%d", my_strlen(arr));
//	return 0;
//}
//char* my_strcpy( char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	
//	return ret;
//}
//void main(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	dest = src;
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[10] = "######";
//	char arr2[10] = "hello";
//	printf("%s", my_strcpy(arr1, arr2));
//}
//void Sort(int arr[])
//{
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = i; j < 9; j++)
//		{
//			if (arr[i] % 2 == 0 && arr[j + 1] % 2 == 1)
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j + 1];
//				arr[j + 1] = tmp;
//				break;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	Sort(arr);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int* const p = &a;
//	*p = 10;
//	printf("%d", a);
//	return 0;
//}
//int g_val = 100;
//int test(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int test(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int arr[20] = { 0 };
//	int i = 0;
//	int sum = test(2, 3);
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 10; i < 20; i++)
//	{
//		arr[i] = i;//¶Ïµã
//	}
//	return 0;
//}
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//3
//	//1!+2!+3!
//	//1+2+6 = 9
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	
//	for (j = 1; j <= n; j++)
//	{
//		//¼ÆËãjµÄ½×³Ë
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}
