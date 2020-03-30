#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <Windows.h>
//#include <stdlib.h>
//#include <time.h>
//#include <string.h>
////int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (1)
//	{
//		printf("输入你要找的数\n");
//		scanf("%d", &k);
//		for (i = 0; i < sz; i++)
//		{
//			if (k == arr[i])
//			{
//				printf("下标为%d\n", i);
//				break;
//			}
//		}
//		if (10 == i)
//		{
//			printf("找不到\n");
//		}
//		i = 0;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = 9;
//	int k = 0;
//	while (1)
//	{
//		printf("输入你要找的数\n");
//		scanf("%d", &k);
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (arr[mid] < k)
//			{
//				left = mid + 1;
//			}
//			if (arr[mid] > k)
//			{
//				right = mid - 1;
//			}
//			if (arr[mid] == k)
//			{
//				printf("下标为%d\n", mid);
//				break;
//			}
//		}
//		if (left > right)
//		{
//			printf("找不到\n");
//		}
//		left = 0;
//		right = 9;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "Welcome to Xian!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}
//int main()
//{
//	char input[10] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		printf("请输入密码\n");
//		scanf("%s", input);
//		if (0 == strcmp(input, "0123456"))
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("三次都错了，程序退出\n");
//	}
//	return 0;
//}
//void menu()
//{
//	printf("***********************\n");
//	printf("***  1.play 0.exit  ***\n");
//	printf("***********************\n");
//}
//void game()
//{
//	int ret = rand()%100+1;
//	while (1)
//	{
//		int num = 0;
//		printf("请在1-100间猜一个数字\n");
//		scanf("%d", &num);
//		if (num == ret)
//		{
//			printf("猜对了\n");
//			break;
//		}
//		if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		if (num < ret)
//		{
//			printf("猜小了\n");
//		}
//	
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入数字\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//void menu()
//{
//	printf("***********************\n");
//	printf("***  1.play 0.exit  ***\n");
//	printf("***********************\n");
//}
//void game()
//{
//	system("shutdown -s -t 10");
//	printf("您的电脑将在10秒后关闭\n");
//	printf("请在1-100间猜一个数字，若猜对了就结束关机\n");
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		int num = 0;
//		scanf("%d", &num);
//		if (num == ret)
//		{
//			printf("猜对了,结束关机\n");
//			system("shutdown -a");
//			break;
//		}
//		if (num > ret)
//		{
//			printf("猜大了，重新猜\n");
//		}
//		if (num < ret)
//		{
//			printf("猜小了，重新猜\n");
//		}
//
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int begin = 0;
//	do
//	{
//		menu();
//		printf("输入“1”进入游戏，输入“0”退出游戏\n");
//		scanf("%d", &begin);
//		switch (begin)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
           /* break;*/
//		}
//	}while (begin);
//	  return 0;
//}
//int main()
//{
//	    char input[10] = { 0 }; 
//	    system("shutdown -s -t 1000");
//again:
//	    printf("你的电脑将在一分钟后关闭\n");
//		printf("如果输入我是猪，就结束关闭\n");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是猪"))
//		{
//			system("shutdown -a");
//		} 
//		else
//		{
//			printf("输入错误，请重新输入\n");
//			goto again;
//		}
//	return 0;
//}
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
	/*int count = 0;
	for (int year = 1000; year <= 2000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d年\n",year);
			count++;
		}
	}
	printf("\n%d", count);*/
	/*is_leap_year(2000);
	return 0;
}*/

//int binary_search(int arr[], int k,int right)
//{
//	       int left = 0;
//	       while (left <= right)
//				{
//		            int mid = (left + right) / 2;
//		            if (arr[mid] < k)
//					{
//						left = mid + 1;
//					}
//					if (arr[mid] > k)
//					{
//						right = mid - 1;
//					}
//					if (arr[mid] == k)
//					{
//						return mid; 
//					}
//				}
//	            return -1;
//
//				
//			
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = binary_search(arr, k,right);
//	printf("%d", ret);
//
//}