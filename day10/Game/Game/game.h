#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define PRIMARY 10
void CreateBoard(char arr[ROWS][COLS], int rows, int cols, char set);
void PrintBoard(char arr[ROWS][COLS], int row, int col);
void SetMine(char arr[ROWS][COLS]);
void SweepMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);