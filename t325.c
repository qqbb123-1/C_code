#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////�����ݹ����׳�
//int Fac(int n) {
//	if (n<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//int main() {
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n",ret);
//	return 0;
//}

//�ж������� -2��3
//void fun(int n) {
//	static int k = 0;
//	if (n < 0) {
//		printf("-");//���-
//		n = -n;//12
//	}
//	k += n % 10; //k=2   ���Եڶ���k=2+1
//	printf("%d", k);
//	if (n / 10)//1
//	{
//		fun(n / 10);//1 
//	}
//}
//int main() {
//	int x = -12;
//	fun(x);
//	printf("\n");
//	return 0;
//}

//������n��쳲�������
//int Fib(int k) {
//	if (k<=2)
//	{
//		return 1;
//	}
//	else {
//		return Fib(k - 1) + Fib(k - 2);
//	}
//}
//�Ż�
int Fib(int x) {
	int a = 1;
	int b = 1;
	int c = 1;
	while(x>2)
	{
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;
}
int main() {
	int n = 0;
	int res = 0;
	scanf("%d", &n);
	res = Fib(n);
	printf("���Ϊ%d", res);
	return 0;
}

