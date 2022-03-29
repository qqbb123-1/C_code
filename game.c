#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//   |   |
//---|---|---
//   |   |
//---|---|---
//   |   |   

//棋盘初始化
void initboard(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i=0;i<row;i++)
	{
		int j = 0;
		for(j=0;j<col;j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印空白棋盘
//i控制行，j控制列
void printborder(char board[Row][Col], int row, int col)
{	
	int i = 0;
	for (i=0;i<row;i++)
	{
		int j = 0;
		//打印第一组数据
		for (j=0;j<col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分隔符
		if (i<row-1)
		{
			for (j=0;j<col;j++)
			{
				printf("---");
				if (j<row-1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}

	}

//玩家打印
void PlayerMove(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("玩家回合");
	while (1)
	{
		printf("请输入坐标");
		scanf("%d%d", &i, &j);
		//判断玩家输入是否合法
		if(i>=1 &&i<=row &&j>=1 &&j<=col)
		{
			if (board[i-1][j-1]==' ')
			{
				board[i-1][j-1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
				
			}
		}
		else
		{
			printf("该坐标不合法，请重新输入\n");
		}
	}
}

//电脑输入
void ComputerMove(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("电脑回合\n");
	while (1)
	{
		i = rand() % row;
		j = rand() % col;
		if (board[i ][j ] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
	
}
//判断棋盘有没有满
int IsFull(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i=0;i<row;i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j]==' ')
			{
				return 0;
			}
		}

	}
	return 1;
}
//判断输赢
char IsWin(char board[Row][Col], int row, int col)
{
	int i = 0;
	while (1)
	{
		//横竖
		for (i = 0; i < row; i++)
		{
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			{
				return board[i][1];
				break;
			}
		}
		for (i = 0; i < col; i++)
		{
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			{
				return board[1][i];
				break;
			}
		}

		//对角线
		if (board[0][0]==board[1][1]&& board[1][1]==board[2][2] && board[1][1]!=' ')
		{
			return board[1][1];
			break;
		}
		
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1]!= ' ')
		{
			return board[1][1];
			break;
		}
		
		//判断平局
		if (IsFull(board,Row,Col) == 1)
		{
			return 'Q';
		}
		else
		{
			return 'C';
		}
	}

}
