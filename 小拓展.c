#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int rest = 0;
	int ch = 0;
int ret = 0;
char password[20] = { 0 };
printf("����������:>");
scanf("%s", password);
//while ((ch = getchar()) != '\n')
//{
//	;
//}
if ((rest = getchar()) = '\n')

printf("��ȷ��(Y/N):>");
ret = getchar();
if (ret == 'Y')
{
	printf("ȷ�ϳɹ�\n");
}
else
{
	printf("����ȷ��\n");
}
	system("pause");
	return 0;
}