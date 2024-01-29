#include <iostream>
#include <fstream>
using namespace std;
	void resetdata(ofstream &outfile){
		outfile<<"00000000000"; 
	}
	void readdata(ifstream &infile){
		int n=9999999;
		cout<<"\nGia tri n ban dau: "<<n<<endl;
		infile>>n;
		cout<<"Gia tri n sau khi doc: "<<n<<endl;

		
	}
int main(){
//	freopen("input.txt", "r",stdin);
//	freopen("output.txt", "w", stdout ) ;
// 	int n;
// 	cin>>n;
// 	int sum;
// 	for(int i = 0; i<n;i++){
// 		int x;
// 		cin>>x;
// 		sum+=x;
//	 }
//	 cout<<sum;
	ofstream outfile("input.txt" );
	int n;
	cin>>n;
	outfile<<n<<"\n";
	for(int i = 0; i<n;i++){
		int c;
		cin>>c;
		outfile<<c<<" ";
	} 
	
	outfile.close();
	ifstream infile("input.txt");
	int a[n];
	infile>>n;
	for(int i = 0; i<(n+1);i++){
		infile>>a[i];
		
	}
	infile.close(); 
	for(int i = 0; i <n ; i++){
		cout<<a[i]<<" ";
	}
	ofstream outfile1("output.txt");
	for(int i=0;i<n;i++){
		outfile1<<(a[i]+1)<<" ";
	}
	outfile1.close();
	ofstream outfile2("output.txt");
	resetdata(outfile2);
	outfile2.close();
	ifstream infile2("output.txt");
	readdata(infile2);
	infile2.close();
	return 0;
} 
