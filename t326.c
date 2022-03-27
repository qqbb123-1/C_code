#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//二维数组
//int main() {
//	int arr[3][4] = { {1,2,3,4},{5,6,7},{8}};
//	int i = 0;
//	for (i=0;i<3; i++)
//	{
//		int j = 0;
//		for (j = 0; j<4; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//冒泡排序函数
//void bubbling_sort(int  arr[], int ret) 
//{
//	int i = 0;
//	//确定冒泡排序的次数
//	for (i = 0;i < ret - 1;i++)
//	{
//			int flag = 1;
//			int k = 0;
//			//进行冒泡排序
//		for (k = 0; k < ret - i-1; k++)
//		{
//			//交换元素
//			if (arr[k]>arr[k+1])
//			{
//				int temp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag==1)
//		{
//			break;
//		}
//	}
//}
//int main() 
//{
//	int  arr[] = {10,9,8,7,6,5,1};
//	int ret = sizeof(arr) / sizeof(arr[0]);//计算数组长度
//	bubbling_sort(arr, ret);//arr传过去的是arr的第一个元素的地址
//	int i = 0;
//	for (i=0;i<ret;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//测试
int main()
{
	int arr[] = { 1,2,3,4 };
	printf("%p\n", arr);//地址
	printf("%p\n", &arr[0]);//地址
	printf("%d\n", *arr);//1
	return 0;
}