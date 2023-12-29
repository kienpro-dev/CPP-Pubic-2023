#include<iostream>
using namespace std ;

int main()
{
	int n ; cin >> n ;
	int a[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	int c100 = 0 , c200 = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] == 100)
			c100++ ;
		else if(a[i] == 200)
			c200++ ;
	}
	if(n>1){
		if(c100%2!=0){
			cout<<"NO";
		}else if(c200 %2 == 0){
			cout<<"YES";
		}else if(c100 >=  2){
			cout<<"YES";
		} else cout<<"NO";
	}else cout<<"NO";
	
	return 0 ;
}
