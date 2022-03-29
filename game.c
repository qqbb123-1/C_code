#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//   |   |
//---|---|---
//   |   |
//---|---|---
//   |   |   

//���̳�ʼ��
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

//��ӡ�հ�����
//i�����У�j������
void printborder(char board[Row][Col], int row, int col)
{	
	int i = 0;
	for (i=0;i<row;i++)
	{
		int j = 0;
		//��ӡ��һ������
		for (j=0;j<col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
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

//��Ҵ�ӡ
void PlayerMove(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("��һغ�");
	while (1)
	{
		printf("����������");
		scanf("%d%d", &i, &j);
		//�ж���������Ƿ�Ϸ�
		if(i>=1 &&i<=row &&j>=1 &&j<=col)
		{
			if (board[i-1][j-1]==' ')
			{
				board[i-1][j-1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
				
			}
		}
		else
		{
			printf("�����겻�Ϸ�������������\n");
		}
	}
}

//��������
void ComputerMove(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("���Իغ�\n");
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
//�ж�������û����
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
//�ж���Ӯ
char IsWin(char board[Row][Col], int row, int col)
{
	int i = 0;
	while (1)
	{
		//����
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

		//�Խ���
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
		
		//�ж�ƽ��
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
