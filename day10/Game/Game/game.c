#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void CreateBoard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}
void SetMine(char arr[ROWS][COLS])
{
	
	int count = 0;
	while (count < PRIMARY)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count++;
		}
	}
}
void PrintBoard(char arr[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}
int Count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x][y - 1] +
		mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y - 1] - 8 * '0';

}
void Unfold(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (Count(mine, x, y) == 0)
	{
		show[x][y] = ' ';
		if (x > 0 && x <= ROW && y - 1 > 0 && y - 1 <= ROW&&show[x][y - 1] == '*')
		{

			Unfold(mine, show, x, y - 1);
		}

		if (x - 1 > 0 && x - 1 <= ROW && y - 1 > 0 && y - 1 <= ROW&&show[x - 1][y - 1] == '*')
		{
			Unfold(mine, show, x - 1, y - 1);
		}

		if (x - 1 > 0 && x - 1 <= ROW && y > 0 && y <= ROW&&show[x - 1][y] == '*')
		{
			Unfold(mine, show, x - 1, y);
		}

		if (x - 1 > 0 && x - 1 <= ROW && y + 1 > 0 && y + 1 <= ROW&&show[x - 1][y + 1] == '*')
		{
			Unfold(mine, show, x - 1, y + 1);
		}

		if (x > 0 && x <= ROW && y + 1 > 0 && y + 1 <= ROW&&show[x][y + 1] == '*')
		{
			Unfold(mine, show, x, y + 1);
		}

		if (x + 1 > 0 && x + 1 <= ROW && y + 1 > 0 && y + 1 <= ROW&&show[x + 1][y + 1] == '*')
		{
			Unfold(mine, show, x + 1, y + 1);
		}

		if (x + 1 > 0 && x + 1 <= ROW && y > 0 && y <= ROW&&show[x + 1][y] == '*')
		{
			Unfold(mine, show, x + 1, y);
		}

		if (x + 1 > 0 && x + 1 <= ROW && y - 1 > 0 && y - 1 <= ROW&&show[x + 1][y - 1] == '*')
		{
			Unfold(mine, show, x + 1, y - 1);
		}
	}
		else
		{
			show[x][y] = Count(mine, x, y)+'0';
		}
}
void SweepMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int amount = 0;
	while (amount < ROW*COL - PRIMARY)
	{
		PrintBoard(show, ROW, COL);
		printf("ÇëÊäÈë×ø±ê");
		int x = 0;
		int y = 0;
		scanf("%d,%d", &x, &y);
		if (x > 0 && x <=ROW && y > 0 && y <=ROW)
		{
			if (mine[x][y] == '1')
			{
				printf("ºÜ±§Ç¸£¬Äã±»Õ¨ËÀÁË\n");
				break;
			}
			else
			{
				show[x][y] = Count(mine, x, y) + '0';
				if (Count(mine, x, y) == 0)
				{
					Unfold(mine, show, x, y);
				}
				amount++;
			}
		}
		else
		{
			printf("ÊäÈë´íÎó£¬ÇëÖØÐÂÊäÈë\n");
		}
	}
	if (amount == ROW*COL-PRIMARY)
	{
		printf("¹§Ï²Äã£¬Ó®ÁË\n");
	}
}
	
