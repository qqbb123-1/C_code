#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	/*int score[] = { 50,21,90,20,42 };
	int sum = 0;
	int avg = 0;
	int max = 0;
	int min = 100;
	int *p;
	for (p=&(score[0]);  p<=&(score[4]); p++)
	{
		sum = sum + *p;
		if (*p>max)
		{
			max = *p;
		}
		else if (*p<min)
		{
			min = *p;
		}
	
		
	}
	printf("sum = % d, avg = % f\n",sum,sum/5.0);
	printf("max=%d,min=%d\n", max, min);*/
	/*int a = 1;*/
	
	//练习 判断奇数偶数
	//1-100
	/*while (a <= 100)
	{
		if (a%2==1)
		{
			printf("%d是奇数\n", a);

		}
		else
		{
			printf("%d不是奇数\n", a);

		}
		a++;
	}*/
	/*printf("奇数为\n");
	while (a<=100)
	{
		printf("%d\n", a);
		a += 2;
	}*/
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("今天星期1");
		break;
	case 2:
		printf("今天星期2");
		break;
	case 3:
		printf("今天星期3");
		break;
	case 4:
		printf("今天星期4");
		break;
	case 5:
		printf("今天星期5");
		break;
	case 6:
		printf("今天星期6");
		break;
	case 7:
		printf("今天星期天");
		break;
	default:
		printf("输入错误");
	}
	return 0;
}