#include<iostream>
using namespace std ;
int main()
{
	int n ;
	cin >> n ;
	int a[n] ;
	for(int i = 0 ; i < n ; i++)
		cin >> a[i] ;
	int k ; 
	cin >> k ;
	int b[n + 1];
	for(int i = 0 ; i < n + 1 ; i++)
	{
		if(i == 0)
			b[i] = k ;
		else
			b[i] = a[i - 1] ;
	}
	// In mang
	for(int i = 0 ; i < n + 1 ; i++)
		cout << b[i] << " " ;
	cout << endl ;
	int maxn = 0 , minn = a[0] ;
	for(int i = 1 ; i < n ; i++)
	{
		if(maxn < a[i])
			maxn = a[i] ;
		if(a[i] < minn)
			minn = a[i] ;
	}
	int sum = 0;
	for(int i = 0 ; i < n ; i++)
	{
		sum += a[i] ;
	}
	
	cout << "Min là: " << minn << endl ;
	cout << "Max là: " << maxn << endl ;
	cout << "Medium score là: " << (double)sum/n << endl ;
	return 0 ;
}
