#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu() {
	printf("***************************\n");
	printf("*******1.paly 2.exit*******\n");
	printf("***************************\n");
}
void game()
{
	char ret = 0;
	char board[Row][Col] = { 0 };
	initboard(board,Row,Col);
	printborder(board, Row, Col);
	while (1)
	{
		//玩家回合
		PlayerMove(board, Row, Col);
		printborder(board, Row, Col);
		//判断玩家输赢
		ret = IsWin(board, Row, Col);
		if (ret != 'C') 
		{
			break;
		}
		//电脑回合
		ComputerMove(board, Row, Col);
		printborder(board, Row, Col);
		//判断电脑输赢
		ret = IsWin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
		
	}
	if (ret == '*')
	{
		printf("玩家赢");
	}
	if (ret== '#')
	{
		printf("电脑赢");
	}
	if(ret == 'Q')
	{
		printf("平局");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
		default:
			printf("输入错误，退出程序");
			break;
		}
	} while (input);
	
	
}
int main()
{
	test();
	return 0;
}
