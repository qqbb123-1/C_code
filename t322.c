#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//判断大小
//int get_max(int x,int y) {
//	return (x > y) ? (x) : (y);
//}
//int main() {
//	int a = 10;
//	int	b = 5;
//	int max = get_max(a, b);
//	printf("%d", max);
//	return 0;
//}
// 
//交换数值
//void swap1(int* a1, int* b1) {
//	int temp = 0;
//	temp = *a1;
//	*a1 = *b1;
//	*b1 = temp;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("a=%d\nb=%d\n", a, b);
//	swap1(&a, &b);
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}

//判断素数
//int sushu(int n) {
//	int j = 0;
//	for ( j = 2; j < n; j++)
//	{
//		if (n % j == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//int main() {
//	int i = 0;
//	for ( i = 100; i <=200; i++)
//	{
//		
//		if (sushu(i)==1)
//		{
//			printf("%d是素数\n", i);
//		}
//	}
//}

//判断闰年
//int is_leap_year(int i) {
//	if ((i%4==0&&i%100!=0)||(i%400==0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//	
//}
//int main() {
//	int year = 0;
//	for ( year = 1000; year <=2000; year++)
//	{
//		if (is_leap_year(year)==1)
//		{
//			printf("%d\n", year);
//		}
//	}
//	return 0;
//}

//有序数列二分查找
//int binary_search(int arr[], int k,int lenth) {
//	
//	int left = 0;
//	int right = lenth - 1;
//	while (left<=right)
//	{
//		int mid =(left+right) / 2;
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	if (left>right)
//	{
//		return -1;
//	}
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int ret = 0;
//	int k = 7;
//	int lenth = sizeof(arr)/sizeof(arr[0]);
//	ret = binary_search(arr, k,lenth);
//	if (ret==-1)
//	{
//		printf("没找到");
//	}
//	else {
//		printf("找到了,下标是%d\n", ret);
//	}
//}

//调用一次函数,num+1
void add(int* num) {
	(*num)++;
}
int main() {
	int num = 0; 
	add(&num);
	printf("num=%d\n", num);
	add(&num);
	printf("num=%d\n", num);
	add(&num);
	printf("num=%d\n", num);
	return 0;
}