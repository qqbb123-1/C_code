#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
int main() {
	//n�Ľ׳�
	/*int n = 0;
	int i = 0;
	int sum1 = 1;
	scanf("%d", &n);
	for (i=1; i<=n ; i++)
	{
		sum1 = i * sum1;
	}
	printf("%d\n", sum1);
	return 0;*/
	
	//1-10�׳˵ĺ�
	/*int n = 0;
	int i = 1;
	int sum1 = 1;
	int sum2 = 0;*/
	/*for (n=1; n <= 10; n++) {
		sum1 = 1;
		for (i=1; i <= n; i++)
		{
			sum1 = sum1 * i;
			
		}
		printf("%d\n", sum1);
		sum2 = sum1 + sum2;
	}
	printf("���Ϊ%d\n", sum2);*/
	/*for(n=1;n<=10;n++)
	{
		sum1 = sum1 * n;
		sum2 = sum1 + sum2;
	}
	printf("%d\n", sum2);*/

	//����������ֲ���
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	//int n = 0;
	//printf("������Ҫ�ҵ�����");
	//scanf("%d", &n);
	//int left = 0;
	//int right = sz - 1;
	//while (left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] < n)
	//	{
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > n)
	//	{
	//		right = mid - 1;
	//	}
	//	else
	//	{
	//		printf("�ҵ���,�±���%d\n", mid);
	//		break;
	//	}
	//}
	//	if(left>right) {
	//		printf("�Ҳ���");
	//	}

	//����ַ��������ƶ������м���
	//char cha1[] = "Hello World!!!";
	//char cha2[] = "**************";
	//int left = 0;
	//int rigt = strlen(cha1) - 1;
	//while (left<=rigt)
	//{
	//	cha2[left] = cha1[left];
	//	cha2[rigt] = cha1[rigt];
	//	printf("%s\n", cha2);
	//	left++;
	//	rigt--;
	//	Sleep(1000);
	//	system("cls");//�����Ļ
	//}
	//printf("%s\n", cha2);

	//�ж�3������
	char password[20] = {0};
	int i = 1;
	while (i<=3)
	{
		printf("����������:");
		scanf("%s", password);
		if (strcmp(password,"321")==0)//�Ƚ��ַ�����strcmp�⺯�� string.h
		{
			printf("������ȷ");
			break;
		}
		else
		{
			printf("���������������\n");
			
		}
		i++;
		
	}
	if (i>3)
	{
		printf("������������󣬳������");
	}
	
	return 0;
	
}
