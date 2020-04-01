#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int my_strlen(char arr[])
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//void ReverseString(char* arr)
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	int tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	ReverseString(arr+1);
//	arr[right] = tmp;
//}
//void ReverseString(char* arr, int right)
//{
//	static int left = 0;
//	if (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		ReverseString(arr, right -1);
//	}	
//}
//int main()
//{
//	char arr[] = "hello";
//	ReverseString(arr, my_strlen(arr)-1);
//	printf("%s", arr);
//	return 0;
//}
//double my_pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n*my_pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / my_pow(n, -k);
//	}
//}
//int main()
//{
//	int n = 2;
//	int k = -3;
//	printf("%lf", my_pow(n, k));
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int ret = (i++) + (i++) + (i++);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}
