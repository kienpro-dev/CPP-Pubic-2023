#include<iostream>
using namespace std;

long long giaiThua(int n)
{
	if (n < 2)
	{
		return 1;
	}
	else
	{
		return n * giaiThua(n - 1);
	}
}

int main()
{
	int n;
	cin >> n;
	if (n >= 0) 
	{
		cout << "S= " << (float)(giaiThua(n) + 1) / giaiThua(n + 1);
	}
	else
	{
		cout << "Khong co giai thua cua n= " << n;
	}
	
	return 0;
}
