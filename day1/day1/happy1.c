#define _CRT_SECURE_NO_WARNINGS 1
#define MAX(a,b) ((a)>(b)?(a):(b))
#include <stdio.h>;
int max(int a, int b)
{
	return a > b ? a: b;
}
int main()
{
	int a = 3;
	int b = 4;
	int sum1 = max(a,b);
	int sum2 = MAX(a, b);
	printf("sum1=%d", sum1);
	printf("sum2=%d", sum2);

}