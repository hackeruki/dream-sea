#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int rest = 0;
	int ch = 0;
int ret = 0;
char password[20] = { 0 };
printf("请输入密码:>");
scanf("%s", password);
//while ((ch = getchar()) != '\n')
//{
//	;
//}
if ((rest = getchar()) = '\n')

printf("请确认(Y/N):>");
ret = getchar();
if (ret == 'Y')
{
	printf("确认成功\n");
}
else
{
	printf("放弃确认\n");
}
	system("pause");
	return 0;
}