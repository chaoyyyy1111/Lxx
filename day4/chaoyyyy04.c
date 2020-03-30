#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int sum = 0;
//	int res = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			i = -i;
//		res = 1 / i;
//		sum += res;
//		if (i < 0)
//			i = -i;
//	}
//	printf("%d", sum);
//   return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (int i = 1; i < 10; i++)
//	{
//		if (arr[0] < arr[i])
//			arr[0] = arr[i];
//	}
//	printf("最大值：%d", arr[0]);
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <=i; j++)
//		{
//			int res = i*j;
//			printf("%d*%d=%d  ", i, j, res);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d%d%d", a, b, c);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a,&b);
//	int min = a > b ? b : a;
//	while (a%min != 0 || b%min != 0)
//	{
//		min--;
//	}
//	printf("%d", min);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a,&b); 
//	int res = 0;
//	while (res=a%b )
//	{
//		a = b;
//		b = res;
//	}
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	for (int year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d年\n",year);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 101; i <= 200; i+=2)
//	{
//		for ( j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d  ", i);
//		
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	ch = getchar();
//	putchar(ch);
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//		
//}
//int main()
//{
//	char ch = 0;
//	char input[30] = { 0 };
//	printf("请输入密码\n");
//	scanf("%s", &input);
//	printf("确认是否正确(Y/N)\n");
//	while ((ch = getchar()) != '\n')
//	{
//	      ;
//	}
//	ch = getchar();
//	if (ch == 'Y')
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//	return 0;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", &arr);
//	printf("%s", arr);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret = 1;
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
//	char ch ;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0'|| ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}