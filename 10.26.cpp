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
	cout << "������n=";
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
	cout << "������һ����λ��������";
	cin >> n;
	while (n)
	{
		count++;
		sum = sum+n%10;
		n = n / 10;
	}
	cout << "λ���ǣ�" << count;
	cout << "���ֺ�Ϊ��" << sum;
	system("pause");
	return 0;
}

