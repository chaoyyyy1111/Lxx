#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.play 0.exit****\n");
//	printf("*********************\n");
//}
//void game()
//{
//	char mine[ROWS][COLS];
//	char show[ROWS][COLS];
//	CreateBoard(mine, ROWS, COLS, '0');
//	CreateBoard(show, ROWS, COLS, '*');
//	SetMine(mine);
//	SweepMine(mine, show, ROW, COL);
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("������1��0\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("������������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}