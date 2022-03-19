#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*int i = 1;*/

	/*while (i <= 10)
	{

		if (i == 5)
			break;

		printf("%d\n", i);
		i++;
	}*/
	/*while (i <= 10)
	{

		if (i == 5)
			continue;

		printf("%d\n", i);
		i++;
	}*/
	/*int ch = 0;
	while ((ch=getchar())!=EOF) {
		printf("%c\n", ch);
	} */
	/*putchar(ch);
	printf("%c\n", ch);*/
	int cha = 0;
	int ret = 0;
	char password[10] = {0};
	printf("请输入密码：\n");
	scanf("%s", password);
	while ((cha=getchar())!='\n')
	{
		;
	}
	printf("请输入T/F\n");
	ret = getchar();
	if (ret=='T')
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}
	return 0;
}