//#include <iostream>
//using namespace std;
//
//void Swap(int *p, int *a){
//	int temp = *a;
//	*a = *p;
//	*p = temp;
//}
//void SWap(int &a, int &b){
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main(){
//	int a=3,b=8;
//	int *ptr=&b;
//	int *arr = new int[a];
//	int *c;
////	if(c == NULL){
////		cout<<"YES";
////	}
//
//	
//	
//	
//	
////	int arr[1000];
////	for(int i = 0 ; i < a; i++){
////		cin>>arr[i];
////	}
////	for(int i = 0 ; i < a; i++){
////		cout<<*(arr+i)<<" ";
////	}
////	cout<<arr<<" ";
////	cout<<&arr;
////	
//	
//	
//	
////	*ptr = a;
////	cout<<&b<<endl;
////	cout<<*ptr;
////	SWap(a,b);
////	cout<<"Ham swap khong dung con tro: "<<a<<" "<<b<<endl;
//	
//	delete[] arr;
//	delete ptr;
//	delete c;
//	return 0;
//} 


//Buoi chieu 

#include<iostream> 
using namespace std;

void Swap(int *p, int *a){
	int temp = *a;
	*a = *p;
	*p = temp;
}

int main(){
//	int x = 20 , y , *ip;
//	ip = &y;
//	*ip = x;
//	cout<<y<<" "<<x;
//	cout<<&y<<" "<<*ip;
//	int a[3]={1,2,3};
//	cout<<a<<" "<<&a[0];
//	cout<<*(a+1)<<" "<<a[0];
//	for(int i = 0; i < 3; i++){
//		cout<<*(a+i)<<" ";
//	}
//	int m = 2 , n = 1;
//	Swap(&m,&n);
	long long n = 10^1000;
	int *arr = new int[n];
	int *b,*a, c= 4;
	b = &c;
	a = b;
	human a;
	a.tuoi = 18;
	a.name = "Duy";
	cout<<a.name;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	for(int i = 0; i < 4; i++){
		cout<<arr[i]<<" ";
	}
	
	
	delete[] arr;
	delete a;
	delete b;
	return 0;
}













