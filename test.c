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
	
	//��ϰ �ж�����ż��
	//1-100
	/*while (a <= 100)
	{
		if (a%2==1)
		{
			printf("%d������\n", a);

		}
		else
		{
			printf("%d��������\n", a);

		}
		a++;
	}*/
	/*printf("����Ϊ\n");
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
		printf("��������1");
		break;
	case 2:
		printf("��������2");
		break;
	case 3:
		printf("��������3");
		break;
	case 4:
		printf("��������4");
		break;
	case 5:
		printf("��������5");
		break;
	case 6:
		printf("��������6");
		break;
	case 7:
		printf("����������");
		break;
	default:
		printf("�������");
	}
	return 0;
}