#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = 0;
//	int count = 0;
//	c = a^b;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((( c >> i ) & 1)==1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//void BinarySequence1(int num)
//{
//	static int i = 0;
//	if (i < 15)
//	{
//		i++;
//		BinarySequence1(num >> 2);
//	}
//	printf("%d ", num & 1);
//}
//void BinarySequence2(int num)
//{
//	static int i = 0;
//	if (i < 15)
//	{
//		i++;
//		BinarySequence2(num >> 2);
//	}
//		printf("%d ", num & 1);
//}
//int main()
//{
//	int num = 40;
//	BinarySequence1(num);
//	printf("\n");
//	BinarySequence2(num>>1);
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	for (int i = 31; i >= 1; i-=2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//}
//int Find(int num)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int num = 15;
//	int count=Find(num);
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int b = 3;
//	printf("%d %d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	return 0;
//}