#define _CRT_SECURE_NO_WARNINGS 1
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n = 0;
	int s = 0;
	int t = 1;
	cout << "请输入n=";
	cin >> n;
	cout << n << '\n';
	for (int i = 1; i <= n; i++)
	{
		t = t * i;
		s = s + t;
	}
	cout << s;
	system("pause");
	return 0;
}

int main()
{
	int n = 0;
	int count = 1;
	int sum = 0;
	cout << "请输入一个五位正整数：";
	cin >> n;
	while (n)
	{
		count++;
		sum = sum+n%10;
		n = n / 10;
	}
	cout << "位数是：" << count;
	cout << "数字和为：" << sum;
	system("pause");
	return 0;
}

