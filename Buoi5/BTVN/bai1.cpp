#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	int arr[27]={0};
	for(int i=0;i<str.length();i++){
		arr[str[i]-'a']++;
	}
	for(int i=0;i<27;i++){
		if(arr[i]!=0){
			cout<<char(i+'a')<<" "<<arr[i]<<endl;
		}
	}
	cout<<endl;
	for(int i=0;i<str.length();i++){
		if(arr[str[i]-'a']!=0){
			cout<<str[i]<<" "<<arr[str[i]-'a']<<endl;
			arr[str[i]-'a']=0;
		}
	}
	return 0;
} 
