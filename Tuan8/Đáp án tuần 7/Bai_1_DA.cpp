#include<iostream>
using namespace std;

void swap(int a[], int n)
{
	int max_id = 0, min_id = n - 1;
	for (int i = 1; i < n; i++)
	{
		if (a[i] >= a[max_id])
		{
			max_id = i;
		}
	}
	
	for (int i = n - 2; i >= 0; i--)
	{
		if (a[i] <= a[min_id])
		{
			min_id = i;
		}
	}
	
	int temp = a[max_id];
	a[max_id] = a[min_id];
	a[min_id] = temp;
	
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ' ';
	}
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	swap(a, n);
	
	return 0;
}
