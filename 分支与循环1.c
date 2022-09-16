#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()


{
	printf("你今天多大啦？\n");
	int age = 10;
		scanf("%d", &age);
		if (age < 18)
			printf("未成年\n");
		else if (age >= 18 && age < 28)
			printf("青年\n");
		else if (age >= 28 && age < 50)
			printf("壮年\n");
		else
			printf("老年\n");
			return;
}
int main()
{
	int n = 1;
	int num = 1;
		scanf("%d", &num);
	if (num == 2*n-1)
		printf("是奇数\n");
	else
		printf("不是奇数\n");
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
		printf("星期一\n");
		break;
	case2:
		printf("星期二\n");
		break;
	case3:
		printf("星期三\n");
		break;
	case4:
		printf("星期四\n");
		break;
	case5:
		printf("星期五\n");
		break;
	case6:
		printf("星期六\n");
		break;
	case7:
		printf("星期日\n");
		break;
	}
	system("pause");
	return 0;
}

