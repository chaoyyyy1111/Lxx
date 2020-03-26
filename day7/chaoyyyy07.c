#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//return 0;
//}
//int Fac(int n)
//{
//	if (n > 1)
//	{
//		return n*Fac(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fac(n));
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	return 0;
//}
//int my_strlen(char str[])
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//	
//}
//int main()
//{
//	char arr[] = "hello";
//	printf("%d", my_strlen(arr));
//}
//int my_strlen(char str[])
//{
//	int count=0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	printf("%d", my_strlen(arr));
//	return 0;
//}
//void reverse_string(char str[],int len,int mid)
//{
//	static int i = 0;
//	if (i != mid)
//	{
//		char tmp = 0;
//		tmp = *str;
//		*str = *(str + len -1 - i);
//		*(str + len - 1 - i) = tmp;
//		i++;
//		reverse_string(str + 1, len-1,mid);
//	}
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = len / 2;
//	reverse_string(arr,len,mid);
//	printf("%s", arr);
//	return 0;
//}
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//	 return n % 10 + DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//	return 0;
//}
//int power(int n,int k)
//{
//	if (k > 1)
//	{
//		return  n*power(n, k - 1);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入n的值\n");
//	scanf("%d", &n);
//	printf("请输入k的值\n");
//	scanf("%d", &k);
//	printf("%d", power(n, k));
//}
//int Fib(n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//		while (n > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//	return c;
//}
//int Fib(int n)
//{
//	if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fib(n));
//	return 0;
//}
//void Hanoi(int n,char a,char b,char c)
//{
//	if (n > 1)
//	{
//		Hanoi(n - 1, a, c, b);
//		printf("%cto%c\n",a,c);
//		Hanoi(n - 1, b, a, c);
//	}
//	else
//	{
//		printf("%cto%c\n", a, c);
//	}
//		
//}
//int main()
//{
//	char a = 'A';//起始柱
//	char b = 'B';//中间柱
//	char c = 'C';//目标柱
//	int n = 0;
//	scanf("%d", &n);
//	Hanoi(n,a,b,c);
//}
//int Fac(int n)
//{
//	if (n > 1)
//	{
//		if (n % 2 == 0)
//		{
//			return 1 + Fac(n / 2);
//		}
//		else
//		{
//			return 1 + Fac(n * 3 + 1);
//		}
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fac(n));
//	return 0;
//}
//int jump2(int n)
//{
//	if (n > 2)
//	{
//		return jump2(n - 1) + jump2(n - 2);
//	}
//	else
//	{
//		return n;
//	}
//}
//int jump3(int n)
//{
//	if (n > 3)
//	{
//		return jump3(n - 1) + jump3(n - 2) + jump3(n - 3);
//	}
//	else if (n==3)
//	{
//		return 4;
//	}
//	else
//	{
//		return n;
//	}
//}
//int jump4(int n)
//{
//	if (n > 4)
//	{
//		return jump4(n - 1) + jump4(n - 2) + jump4(n - 3)+jump4(n - 4);
//	}
//	else if (n == 4)
//	{
//		return 8;
//	}
//	else if (n == 3)
//	{
//		return 4;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", jump3(n));
//	return 0;
//}
