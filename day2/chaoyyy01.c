#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;

//��ӡ1-100֮������3�ı���������
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}
//���������������������������Լ��
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int temp = 0;
//	scanf("%d%d", &num1, &num2);
//	if (num1 > num2)
//	{
//		temp = num1;
//		num1 = num2;
//		num2 = temp;
//	}
//	while (num2%num1 != 0)
//	{
//		int rema = num2%num1;
//		num2 = num1;
//		num1 = rema;
//	} 
//	printf("%d", num1);
//	return 0;
//}
//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 1000;
//	while (year >= 1000 && year <= 2000)
//	{
//		
//			printf("%d��\n", year);
//			year += 4;
//	}
//  return 0;
//}
//��������Ӵ�С����
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	scanf("%d%d%d", &num1, &num2, &num3);
//	if (num2 > num1&&num3 > num2)
//	{
//		printf("%d,%d,%d", num3, num2, num1);
//	}
//	else if (num3 > num1&&num2 > num3)
//	{
//		printf("%d,%d,%d", num2, num3, num1);
//	}
//	else if (num1 > num2&&num3 > num1)
//	{
//		printf("%d,%d,%d", num3, num1, num2);
//	}
//	else if (num3 > num2&&num1 > num3)
//	{
//		printf("%d,%d,%d", num1, num3, num2);
//	}
//	else if (num1 > num3&&num2 > num1)
//	{
//		printf("%d,%d,%d", num2, num1, num3);
//	}
//	else 
//	{
//		printf("%d,%d,%d", num1, num2, num3);
//	}
//	return 0;
//}
//��ӡ100-200֮�������
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		for (int j = 2; j <= i - 1; j++)
//		{
//			if (i%j == 0)
//				break;
//			if (i - 1 == j)
//				printf("%d\n", i);
//		}
//	}
//	return 0;
//}
int func(int a)
{
	int b;
	switch (a)
	{
	case 1: b = 30;
	case 2: b = 20;
	case 3: b = 16;
	default: b = 0;
	}
	return b;
}
int main()
{
	int a = 1;
	printf("%d", func(a));
	
	return 0;
}
