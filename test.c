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
		//��һغ�
		PlayerMove(board, Row, Col);
		printborder(board, Row, Col);
		//�ж������Ӯ
		ret = IsWin(board, Row, Col);
		if (ret != 'C') 
		{
			break;
		}
		//���Իغ�
		ComputerMove(board, Row, Col);
		printborder(board, Row, Col);
		//�жϵ�����Ӯ
		ret = IsWin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
		
	}
	if (ret == '*')
	{
		printf("���Ӯ");
	}
	if (ret== '#')
	{
		printf("����Ӯ");
	}
	if(ret == 'Q')
	{
		printf("ƽ��");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
		default:
			printf("��������˳�����");
			break;
		}
	} while (input);
	
	
}
int main()
{
	test();
	return 0;
}
