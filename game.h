#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Row 3
#define Col 3
void initboard(char board[Row][Col], int row, int col);
void printborder(char board[Row][Col], int row, int col); 
void PlayerMove(char board[Row][Col], int row, int col);
void ComputerMove(char board[Row][Col], int row, int col);
char IsWin(char board[Row][Col], int row, int col);
int IsFull(char board[Row][Col], int row, int col);
