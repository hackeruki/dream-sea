#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()


{
	printf("�����������\n");
	int age = 10;
		scanf("%d", &age);
		if (age < 18)
			printf("δ����\n");
		else if (age >= 18 && age < 28)
			printf("����\n");
		else if (age >= 28 && age < 50)
			printf("׳��\n");
		else
			printf("����\n");
			return;
}
int main()
{
	int n = 1;
	int num = 1;
		scanf("%d", &num);
	if (num == 2*n-1)
		printf("������\n");
	else
		printf("��������\n");
	return 0;
}
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d\n", i);
		i++;
		}
	return 0;
}
int main()
{
	int day = 1;
		scanf("%d", &day);
	switch (day)
	{
	case1:
		printf("����һ\n");
		break;
	case2:
		printf("���ڶ�\n");
		break;
	case3:
		printf("������\n");
		break;
	case4:
		printf("������\n");
		break;
	case5:
		printf("������\n");
		break;
	case6:
		printf("������\n");
		break;
	case7:
		printf("������\n");
		break;
	}
	system("pause");
	return 0;
}

